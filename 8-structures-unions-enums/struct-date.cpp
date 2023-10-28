/*
 *  Define a struct Date to keep track of dates. Provide functions
 *  that read Dates from input, write Dates to output, and initialize
 *  a Date with a date.
*/
#include <iostream>
struct Date_Struct {
    int month;
    int day;
    int year;
    Date_Struct(int month, int day, int year);
};

Date_Struct writeDate(int month, int day, int year);
void readDate(Date_Struct &date);
Date_Struct* writeDateP(int month, int day, int year);
void readDateP(Date_Struct *date);

Date_Struct::Date_Struct(int month, int day, int year)
    :month{month},
    day{day},
    year{year}
{
    if(month < 1 || month > 12){
    // throw err
    }
}

int main(){
    Date_Struct myBirthday = Date_Struct(1, 29, 1994);
    std::cout << "this is my birthday " << myBirthday.month << myBirthday.day << myBirthday.year << std::endl;
    Date_Struct newDate = writeDate(4, 21, 1993);
    readDate(newDate);
    // with pointers
    Date_Struct* newDateP = writeDateP(4, 21, 1993);
    readDateP(newDateP);
}

Date_Struct writeDate(int month, int day, int year){
    Date_Struct newDate = Date_Struct(month, day, year);
    return newDate;
}

void readDate(Date_Struct &date){
    std::cout << "date month: " << date.month << "day: " << date.day << "year: " << date.year;
}

// try by passing by pointer
// cant do this since the memory is on the stack which changes in each lexical scope
// pointer may not be pointing to right thing
// can change this if we want to make members static which we dont since we are using a constructor

Date_Struct* writeDateP(int month, int day, int year){
    Date_Struct newDate = Date_Struct(month, day, year);
    return &newDate;
}

void readDateP(Date_Struct *date){
    std::cout << "date month: " << date->month << "day: " << date->day << "year: " << date->year;
}

