#include<conio.h>
#include<iostream>
#include<string>
using namespace std;


class Base
{
    public:
    virtual void show()
    {
        cout<<"base class"<<endl;
    }
};

class Derv1 : public Base
{
    public:
    void show()
    {
        cout<<"derived class1"<<endl;
    }
};

class Derv2:public Base{
    public:
    void show()
    {
        cout<<"derived class2"<<endl;
    }
};

int main()
{
    Base *ptr;
    ptr = new Derv1();
    ptr->show();
    ptr= new Derv2();
    ptr->show();

}