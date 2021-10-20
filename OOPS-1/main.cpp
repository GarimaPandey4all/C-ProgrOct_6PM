#include <iostream>

using namespace std;
//
//class and object
//
//person - object
//human - class
//
//sparrow - object
//bird - class
//
//class - category, logical entity, blueprint/layout etc
//object - real time entity, physical entity, real fact etc

class HelloWorld {
//
//    variables - data members/class variables / instance(object) variables
//    functions - methods/member functions

//Access Modifier/Specifier: public, private (bydefault), protected

//private:
public:
void display()
{
    cout<<"Hello World"<<endl;
}

};

int main()
{
    HelloWorld obj;
    obj.display();

    HelloWorld obj2;
    obj2.display();

    return 0;
}
