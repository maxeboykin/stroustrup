/*
 * Write a program that prints the sizes of the
 * fundamental types, a few pointer types, and a
 * few enumerations of your choice.
 * Use the sizeof operator.
*/
#include <iostream>

int main()
{
    std::cout << "size of char " << sizeof(char) << '\n';
    std::cout << "size of short " << sizeof(short) << '\n';
    std::cout << "size of int " << sizeof(int) << '\n';
    std::cout << "size of long " << sizeof(long) << '\n';
    std::cout << "size of bool " << sizeof(bool) << '\n';
    std::cout << "size of long long " << sizeof(1LL) << '\n';
    std::cout << "size of unsigned long " << sizeof(1UL) << '\n';
    std::cout << "size of float " << sizeof(float) << '\n';
    std::cout << "size of double " << sizeof(double) << '\n';
    std::cout << "size of long double " << sizeof(long double) << '\n';

}