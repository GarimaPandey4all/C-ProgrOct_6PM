#include <iostream>

using namespace std;

class Parent {

public:
    void show()
    {
        cout<<"Parent show method"<<endl;
    }
};

class Child : public Parent {

public:
    //overriding
    void show()
    {
        cout<<"Child show method"<<endl;
    }

};

int main()
{
    Child obj;
    obj.show();

    return 0;
}
