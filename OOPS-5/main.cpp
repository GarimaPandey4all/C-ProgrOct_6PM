#include <iostream>

using namespace std;
//
//encapsulation: wrapping all the variables and methods into a single unit is called encapsulation.
//class is the example of encapsulation.

//good encapsulation = security = abstraction = data hiding: you just need to share essential info to the
//user not an internal info.

class Add {

private:
int a, b; // data hiding/ abstraction

public:
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
