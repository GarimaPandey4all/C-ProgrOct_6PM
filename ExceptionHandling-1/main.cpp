#include <iostream>

using namespace std;

//Exception: abnormal condition or Runtime Error
//
//Handling:
//
//    1. try block
//    2. throw
//    3. catch block

int main()
{
    //int x = 10;
    char x = 'M';

    try {
        if(x == 'M')
        {
            throw 'M';
        }

        cout<<"Try-Block"<<endl;

//        if(x == 10)
//        {
//            throw 10;
//        }
    }

    catch(char e)
    {
        cout<<"Exception here "<<e<<endl;
    }

    catch(char e)
    {
        cout<<"Exception here "<<e<<endl;
    }

    return 0;
}
