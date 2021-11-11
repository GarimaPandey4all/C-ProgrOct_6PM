#include <iostream>

using namespace std;
//
//Polymorphism:
//
//    poly- many and morphism-forms
//
//    e.g: person- student, brother, son, father etc

//polymorphism has two types:
//
//    a) compile time polymorphism
//    1. function overloading 2. operator overloading
//    b) runtime polymorphism
//    1. function overriding

void add(int a, int b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

void add(float a, float b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

void add(int a, int b, int c)
{
    cout<<"Addition is: "<<(a + b + c)<<endl;
}

int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(10.56f, 20.78f);

    return 0;
}
