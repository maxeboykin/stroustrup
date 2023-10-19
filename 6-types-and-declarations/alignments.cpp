/*
 * What are the alignments (in number of chars) of the
 * types: bool, char, short, int, long, long long, float,
 * double, long double, unsigned and unsigned long?
*/
#include <iostream>

int main()
{
    auto ac = alignof(char);
    auto ai = alignof(int);
    auto ad = alignof(double);
    auto af = alignof(float);
    auto ab = alignof(bool);
    auto al = alignof(long);
    auto all = alignof(long long);
    auto au = alignof(unsigned);
    auto ald = alignof(long double);
    auto aul = alignof(unsigned long);
    auto as = alignof(short);
    std::cout << "alignment char: " << ac << "\n";
    std::cout << "alignment int: " << ai << "\n";
    std::cout << "alignment double: " << ad << "\n";
    std::cout << "alignment float: " << af << "\n";
    std::cout << "alignment bool: " << ab << "\n";
    std::cout << "alignment long: " << al << "\n";
    std::cout << "alignment long long: " << all << "\n";
    std::cout << "alignment unsigned: " << au << "\n";
    std::cout << "alignment long double: " << ald << "\n";
    std::cout << "alignment unsigned long: " << aul << "\n";
    std::cout << "alignment short: " << as << "\n";
}