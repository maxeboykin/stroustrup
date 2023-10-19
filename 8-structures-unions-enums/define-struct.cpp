/*
 * Define a struct with a member of each of the types bool, char, int, long, double, and long double.
 * Order the members so as to get the largest size of the struct and the smallest size of the struct.
*/
#include <iostream>
// page 204
struct Address {
    const char* name;
    int number;
    const char* street;
    const char* town;
    char state[2];
    const char* zip;
};

struct Address2 {
    char state[2];
    int number;
    const char* name;
    const char* street;
    const char* town;
    const char* zip;
};
Address createAddress();
Address2 createAddress2();
int main(){
    Address mine = createAddress();
    std::cout << "size of address struct " <<
    sizeof(mine) << std::endl;
    std::cout << "address name: " <<
              mine.name << std::endl;
    std::cout << sizeof(const char*) << sizeof(int) <<
    sizeof(char) << sizeof(const char*) << std::endl;
    // address2 is 40 bytes vs 48
    Address2 mine2 = createAddress2();
    std::cout << "size of address2 struct " <<
              sizeof(mine2) << std::endl;
    std::cout << "address name: " <<
              mine2.name << std::endl;
}

Address createAddress(){
    Address mock;
    mock.name = "Max Boykin";
    mock.number = 1241;
    mock.street = "Prospect Ave";
    mock.town = "Brooklyn";
    mock.state[0] = 'N';
    mock.state[1] = 'Y';
    mock.zip = "11218";
    return mock;
}

Address2 createAddress2(){
    Address2 mock;
    mock.name = "Max Boykin";
    mock.number = 1241;
    mock.street = "Prospect Ave";
    mock.town = "Brooklyn";
    mock.state[0] = 'N';
    mock.state[1] = 'Y';
    mock.zip = "11218";
    return mock;
}
