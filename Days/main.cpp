#include <iostream>

using namespace std;

int main()
{
    int days[] = {31, 29, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};

    for(int i = 0; i < 12; i++)
    {
        cout<<i+1<<" Month has "<<days[i]<<" days"<<endl;
    }

    return 0;
}
