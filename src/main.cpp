#include "../include/fib.h"
#include <iostream>


int main()
{
int num;

std::cout << "How many Fibonacci numbers? " << std::endl;
std::cin >> num;
fib(num, 0, 0, 0);
}

