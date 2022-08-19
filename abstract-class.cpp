#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Parent//abstract class
{
    public:
    virtual void show() = 0;
};

class boy: public Parent
{
    public:
    void show()
  {
      cout<<"brown"<<endl;
  }
};

int main()
{
    Parent *ptr;
    ptr = new boy();
    ptr->show();
}