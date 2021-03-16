#include "serialize.hpp"

void *serialize(void)
{
    std::string str = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *raw = new char[20];
    for (int i = 0; i < 8; ++i)
        raw[i] = str[rand() % str.length()];
    int h = rand();
    *reinterpret_cast<int*>(raw+8) = h;
    for (int i = 0; i < 8; ++i)
        raw[i+12] = str[rand() % str.length()];
    // write (1, "First part: ", 12) ; write(1, raw, 8);
    // std::cout << "\nInt in the middle: " << h << std::endl;
    // write(1, "Last part: ", 11); write(1, raw + 12, 8);
    // std::cout << std::endl;
    return (raw);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    data->n = *reinterpret_cast<int*>((static_cast<char*>(raw)+8));
    data->s2 = std::string(reinterpret_cast<char*> (raw)+12, 8);
    return (data);
}