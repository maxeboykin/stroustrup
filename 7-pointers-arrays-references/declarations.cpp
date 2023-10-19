/*
 * Write declarations for the following: a pointer to a character, an array of 10 integers, a reference
 * to an array of 10 integers,
 * a pointer to an array of character strings, a pointer to a pointer to a character,
 * a constant integer, a pointer to a constant integer, and a constant pointer to an integer.
 * Initialize each one.
*/
#include <iostream>

int main()
{
    char c = 'a';
    char *p = &c;   // pointer to char

    int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p1 = v; // reference to an array of 10 integers
    int *p2 = &v[0];
    int *p3 = v+4; //pointer to index 4

    printf("p3: %d\n", *p3);

    const char* h = "Heraclitus";
    const char* h2 = "Heraclitus";
    if(h == h2) std::cout << "this is at the same address!\n";

    char a[] = "Annemarie";
    char* ap = a; // pointer to string of arrays
    printf("strlen(ap)=%lu strlen(a)=%lu\n", strlen(ap), strlen(a));

    const int pie = 3; // const int
    const int* p_pi = &pie; // pointer to constant int
    char** ppc; // pointer to a poitner to a char

    int const* c_pi = &pie; // a constant pointer
}