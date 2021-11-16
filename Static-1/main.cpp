#include <iostream>

using namespace std;

class Example
{
private:
    int age;
    static int marks;

public:
    void setData(int age)
    {
        this->age = age;
    }

    void getData()
    {
        cout<<"Age is:"<<age<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int Example :: marks = 576; // static variable initialization


int main()
{
    Example obj;
    obj.setData(25);
    obj.getData();

    return 0;
}
