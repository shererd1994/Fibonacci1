#include <iostream>
//#include <string>

void fib(int num, int i, int fib1, int fib2)
{
    int fib3;
    if (i == num) return;

    if (i < num && i > 1 )  fib3 = fib2 + fib1;
    else fib3 = i;
    
    std::cout << fib3 << " ";
    fib(num, ++i, fib2, fib3);
}
