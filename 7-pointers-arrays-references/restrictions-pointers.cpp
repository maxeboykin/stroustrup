/*
 * What, on your system, are the restrictions on the pointer types char∗, int∗, and void∗?
 * For example, may an int∗ have an odd value? Hint: alignment.
*/
#include <iostream>

int main()
{
    std::printf("alignment char* %lu\n", alignof(char*));
    std::printf("alignment int* %lu\n", alignof(int*));
    std::printf("alignment void* %lu\n", alignof(void*));
}