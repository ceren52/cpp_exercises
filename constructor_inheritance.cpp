#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class base
{
    public:

    base()
    {
        cout<<"default constructor"<<endl;
    }
    base(int b)
    {
        cout<<"parametrized constructor"<<endl;
    }
};

class derived : public base
{
    //empty
};

int main()
{
    derived d1;
    return 0;
}