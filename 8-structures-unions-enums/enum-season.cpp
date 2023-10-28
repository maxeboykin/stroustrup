/*
 * Implement an enum called Season with enumerators spring, summer, autumn, and winter.
 * Define operators ++ and −− for Season. Define input (>>) and output (<<) operations for Season,
 * providing string values. Provide a way to control the mapping between Season values and their string
 * representations. For example, I might want the strings to reflect the Danish names for the seasons. For
 * further study, see Chapter 39.
*/
#include <iostream>

enum class Season { spring, summer, autumn, winter };
void printSeason(Season season);
int main(){

    Season current = Season::autumn;
    printSeason(current);
}

void printSeason(Season season){
    switch(season) {
        case Season::spring:
            std::cout << "The season is Spring!" << std::endl;
            break;
        case Season::summer:
            std::cout << "The season is Summer!" << std::endl;
            break;
        case Season::autumn:
            std::cout << "The season is Autumn!" << std::endl;
            break;
        case Season::winter:
            std::cout << "The season is Winter!" << std::endl;
            break;
        default:
            std::cout << "this should never be hit!" << std::endl;
    }
}
