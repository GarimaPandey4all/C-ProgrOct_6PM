#include <iostream>

using namespace std;

namespace first {

    int value = 100;

}

namespace second {

    int x = 500;

    int func()
    {
        return x;
    }
}

//Global Variable
//int value = 100;

int main()
{
    //local variable
    int value = 200;

    cout<<value<<endl;
    cout<<first::value<<endl;
    cout<<second::func()<<endl;

    return 0;
}
