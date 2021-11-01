#include <iostream>

using namespace std;

//Access Modifier / Specifier
//
//1. public - access from anywhere
//2. private - access with in the class
//3. protected - access with in the class and outside also but by using only inheritance

class Parent {

protected:
    int rollno;
};

class Child : public Parent { // inheritance

public:
    Child(int r)
    {
        rollno = r;
    }

    void display()
    {
        cout<<"Roll no: "<<rollno<<endl;
    }
};

int main()
{
    Child obj(1001);
    obj.display();

    return 0;
}
