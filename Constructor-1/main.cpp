#include <iostream>

using namespace std;

class Add {

private:
    int a, b;

public:

//    constructor: special type of function,
//    because this function name and class name is same.
//
//    It is used to initialize the class variables.
//    There is no need to call this consturctor by using any object.
//    Because it calls itself once object of class is created.

//    Default Constructor
//    parameterized constructor

    Add() // default constructor
    {
        a = 10;
        b = 20;
    }

//    Add(int x, int y) // parameterized constructor
//    {
//        a = x;
//        b = y;
//    }

    void getData()
    {
        cout<<"Addition is:"<<(a + b)<<endl;
    }

    ~Add() // Destructor
    {
        cout<<"Destructor Called...."<<endl;
    }

};


int main()
{
    Add obj;
    //Add obj(60, 20);
    obj.getData();

    return 0;
}
