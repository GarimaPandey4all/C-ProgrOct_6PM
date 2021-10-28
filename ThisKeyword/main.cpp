#include <iostream>

using namespace std;

//this - it is used to store address of the current object.

class Add
{
private:
    int a, b;

public:
    Add(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout<<"Addition is: "<<(a + b)<<endl;
    }
};


int main()
{
    Add obj(10, 20);
    obj.display();

    return 0;
}
