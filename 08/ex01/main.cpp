#include "span.hpp"

void display(Span span)
{std::cout << "span size: " << span.getSize() << " | span min: " << span.shortestSpan() << " span max: " << span.longestSpan() << std::endl;}

int main()
{
    srand(time(NULL));

    std::cout << "SUBJECTS MAIN" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "MY MAIN" << std::endl;
    Span span(5000);
    std::list<int> tmp;
    for (int i = 0; i < 5000; i++)
        tmp.push_back(i - 2500);
    std::cout << "Create a tmp list of " << tmp.size() << " | min: " << tmp.front() << " max: " << tmp.back() << std::endl;
    std::cout << "Add numbers in one time" << std::endl;
    span.addNumber(tmp.begin(), tmp.end());
    display(span);
    tmp.clear();
    std::cout << "\nWith random numbers" << std::endl;
    for (int i = 0; i < 10; i++)
        tmp.push_back(rand() % 1000);
    for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    Span random(10);
    random.addNumber(tmp.begin(), tmp.end());
    display(random);
    std::cout << "\nCreate copy" << std::endl;
    Span copy = random;
    display(copy);

    std::cout << "\nNew one with a size max of ten, but non initilized" << std::endl;
    Span exc(10);
    try{
        std::cout << "Search longest: ";
        exc.longestSpan();
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << "Search smallest: ";
        exc.shortestSpan();
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << "Add 1000 numbers:";
        for (int i = 0; i < 1000; i ++){
            exc.addNumber(i);
            std::cout << " " << i;
        }
    }
    catch(const std::exception &e){
        std::cout << "\n" << e.what() << std::endl;
    }

}