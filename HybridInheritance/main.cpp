#include <iostream>

//hybrid: multiple + heirarchical

using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout<<"Parent1 Class"<<endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout<<"Parent2 Class"<<endl;
    }
};
//multiple
class Child1 : public Parent1, public Parent2
{
public:
    Child1()
    {
        cout<<"Child1 Class"<<endl;
    }
};

//heirarchical
class Child2 : public Parent1
{
public:
    Child2()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child1 obj;
    Child2 obj2;

    return 0;
}
