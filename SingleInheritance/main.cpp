#include <iostream>

using namespace std;

//inheritance: parent - child relationship , it provides reuseability

//parent/base class
class Parent
{
public:

    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};

//child/derived class
class Child : public Parent // inheritance
{
public:

    Child()
    {
        cout<<"Child Class"<<endl;
    }
} ;


int main()
{
    Child obj;

    return 0;
}
