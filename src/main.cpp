#include <iostream>

#include "../include/ForTest.h"

int main()
{
    std::cout << "HelloWorld" << std::endl;

    std::cout << ForTest::add(1, 2) << std::endl;
    std::cout << ForTest::sub(1, 2) << std::endl;

    return 0;
}