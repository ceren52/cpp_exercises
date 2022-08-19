#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:

    int age;
    string name;

    public:

    Person (int age, string name)
    {
        this->age=age;
        this->name = name;
    }
    void printValue()
    {
        cout<<"age:"<<age<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main()
{
    Person a( 45,"john");
    a.printValue();
}