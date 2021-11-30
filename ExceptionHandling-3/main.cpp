#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    try {

        cout<<"Enter value for a and b:";
        cin>>a>>b;

        if(b == 0)
        {
            throw 0;
        }

        c = a / b;

        cout<<"Division is: "<<c<<endl;

    }

    catch(int e)
    {
        cout<<"please enter valid denominator as you entered "<<e<<endl;
    }

    return 0;
}
