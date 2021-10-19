
//Pre-Processor Directive
//Pre-Processor : #
//Directive: Folder
//iostream: header file
//Input / Output Stream (Flow of Data)
#include <iostream>

//using namespace std;

void main() // main() - Entry point
{
    int a, b;

    std::cout<<"Enter any value for a and b:"; // :: - scope resolution operator
    std::cin>>a>>b;

    std::cout<<"Addition is:"<<(a + b)<<std::endl; // endl - new line

//    cout: print output on the output screen
//    cin: user input

    //return 0;
}
