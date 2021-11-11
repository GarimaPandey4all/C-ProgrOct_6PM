#include <iostream>

using namespace std;

//10 + i15
//3  + i10
//13 + i25

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void print()
    {
        cout<<"Addition is:"<<real<<" + i"<<imag<<endl;
    }
};

int main()
{
    Complex obj1(10, 15);
    Complex obj2(3, 10);

    Complex obj3;

    obj3 = obj1 + obj2;

    obj3.print();

    return 0;
}
