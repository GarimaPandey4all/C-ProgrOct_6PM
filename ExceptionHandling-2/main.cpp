#include <iostream>

using namespace std;

void func()
{
    int age = 18;
    if(age == 18)
    {
        throw 18;
    }
}

int main()
{
    try {

        func();

        cout<<"Without Exception code"<<endl;
    }

    catch(...)
    {
        cout<<"Exception Here...Global"<<endl;
    }

//    catch(int e)
//    {
//        cout<<"Exception Here "<<e<<endl;
//    }

    return 0;
}
