#include <iostream>

using namespace std;

class Add {

public:
int a, b;

    void setData(int x, int y) // setter
    {
        a = x;
        b = y;
    }

    void getData() // getter
    {
        cout<<"Addition is:"<<(a + b)<<endl;
    }

};

int main()
{
    Add obj;

    obj.setData(10, 20);
    obj.getData();

    return 0;
}
