/*
 * What happens when you read and write beyond the bounds of an array. Do a few experiments involving a global
 * array of ints, a local array of ints, an array of ints allocated by new,
 * and a member array of ints.Try reading and writing just beyond the end and far beyond the end.
 * Try the same for just before and far before the beginning.
 * See what happens for different optimizer levels.
 * Then try hard never to do out-of-range access by mistake.
*/
#include <iostream>
void doSomething(double* arg);
void doSomethingBefore(double *arg);
void printArr(double *arg, std::string &name);
void printArrBefore(double* arg, std::string& name);
int main()
{
   double a1[10];
   double* a2 = new double[10] {0,0,0,0,0,0,0,0};
   doSomething(a1);
   std::string name1 = "a1";
   std::string name2 = "a2";
   printArr(a1, name1);
   doSomething(a2);
   printArr(a2, name2);
   doSomethingBefore(a1);
   printArrBefore(a1, name1);
}

void printArr(double* arg, std::string& name){
    std::cout << name << std::endl;
    for(int i = 0; i < 15; i++){
        std::printf("[%d]=%f\n", i, arg[i]);
    }
}

void printArrBefore(double* arg, std::string& name){
    std::cout << name << std::endl;
    for(int i = -5; i < 15; i++){
        std::printf("[%d]=%f\n", i, arg[i]);
    }
}

void doSomethingBefore(double *arg){
    for(int i = -5; i < 0; i++){
        arg[i]+=99;
    }
}

void doSomething(double* arg){
    for(int i = 0; i < 15; i++){
        arg[i]+=99;
    }

}