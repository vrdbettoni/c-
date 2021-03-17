#include "mutanstack.hpp"
#include <iostream>
#include <list>
#include <sstream>
#include <time.h>
#include <cstdlib>

template<typename T>
void compare(const T &lhs, const T &rhs, std::string cmp){
    std::cout << "Compare " << cmp << std::endl;
    if (rhs != lhs)
        std::cout << "Error\n" << std::endl;
    else
        std::cout << "OK\n" << std::endl;
}

int main()
{
    std::cout << "Main's Subjects" << std::endl;
    MutantStack<int>    mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "~My Main~" << std::endl;
    MutantStack<int> my;
    std::list<int> their;
    std::stringstream buffer1;
    std::stringstream buffer2;

    srand(time(NULL));
    std::cout << "Compare our MutantStack with std::list\n" << std::endl;
    compare(my.empty(), their.empty(), "empty function");
    std::cout << "Insertion of 50 random elements (with push())" << std::endl;
    for (int i = 0; i < 50; ++i){
        int nb = rand()% 2147483647;
        my.push(nb);
        their.push_back(nb);
    }
    compare(my.size(), their.size(), "size");
    for(MutantStack<int>::iterator it = my.begin(); it != my.end(); ++it){
        buffer1 << *it << " ";
    }
    for(std::list<int>::iterator it = their.begin(); it != their.end(); ++it){
        buffer2 << *it << " ";
    }
    compare(buffer1.str(), buffer2.str(), "value with iterators");
    for(int i = 0; i < 10; i++){
        my.pop();
        their.pop_back();
    }
    compare(my.size(), their.size(), "size after 10 pop()");
    compare(my.top(), their.back(), "top element");

    MutantStack<int>::iterator mit = my.begin();
    std::list<int>::iterator tit = their.begin();
    for (int i = 0; i < 5; ++i){
        ++mit;
        ++tit;
    }
    compare(*mit, *tit, "the 5th value with inc iterator from the beginnig");
    mit = my.end();
    tit = their.end();
    for (int i = 0; i < 5; ++i){
        --mit;
        --tit;
    }
    compare(*mit, *tit, "the 5th value with dec iterator from the end");
    
    int pop1 = 0;
    int pop2 = 0;
    while (!my.empty()){
        my.pop();
        ++pop1;
    }
    while (!their.empty()){
        their.pop_back();
        ++pop2;
    }
    compare(pop1, pop2, "nb of pop() required to clear MutantStack/std::list");
    return 0;
}