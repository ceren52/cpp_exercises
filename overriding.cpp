#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class base
{
    public:
    void Msg()
    {
        cout<<"base class";
    }
};

class derived: public base
{
    public:
    void Msg()
    {
        cout<<"derived class";
        base::Msg();
    }
};

int main()
{
    base b;
    b.Msg();  //base class
    derived c;
    c.Msg(); //derived class and base class 
}
