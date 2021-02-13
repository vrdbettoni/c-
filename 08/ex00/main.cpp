#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <list>

int main()
{
    srand(time(NULL));
    std::cout << "With vector" << std::endl;
    std::vector<int> vint(20, 0);
    for (size_t i = 0; i < vint.size(); i++)
        vint[i] = rand()%20;
    int i = rand()%20;
    std::cout << "Search " << i << "\nin: ";
    for (std::vector<int>::iterator it = vint.begin(); it != vint.end(); it++)
        std::cout << *it << " ";
    std::vector<int>::iterator ret = easyfind(vint, i);
    std::cout << std::endl;
    if (ret != vint.end())
        std::cout << *ret << std::endl;
    else
        std::cout << "not found." << std::endl;

    std::cout << "\nWith dequ" << std::endl;
    std::deque<int> vdequ(20, 0);
    for (size_t i = 0; i < vdequ.size(); i++)
        vdequ[i] = rand() % 20;
    i = rand() % 20;
    std::cout << "Search: " << i << std::endl;
    std::cout << "in: ";
    for (std::deque<int>::iterator it = vdequ.begin(); it != vdequ.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::deque<int>::iterator retdequ = easyfind(vdequ, i);
    if (retdequ != vdequ.end())
        std::cout << *retdequ << std::endl;
    else
        std::cout << "not found." << std::endl;

    std::cout << "\nWith list" << std::endl;
	std::list<int> list;
	for (int i = 0; i < 20; i++)
		list.push_back(rand()%20);
    i = rand() % 20;
    std::cout << "Search: " << i << std::endl;
    std::cout << "in: ";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::list<int>::iterator retlist = easyfind(list, i);
    if (retlist != list.end())
        std::cout << *retlist << std::endl;
    else
        std::cout << "not found." << std::endl;
}