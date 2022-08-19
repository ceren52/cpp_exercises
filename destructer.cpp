#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Test
{
private:
int *age;

public:
    Test()
    {
        age = new int();
        *age=0;
        cout<<endl<<"np constructor";
    }
    Test(int x)
    {
        age = new int();
        *age=x;
        cout<<endl<<"p constructor";
    }
    ~Test()
    {
        delete age;
        cout<<endl<<"destructer";
    }
};

int main()
{
    Test obj1;
    Test obj2(10);
    return 0;
}