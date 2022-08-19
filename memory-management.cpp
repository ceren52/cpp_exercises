#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Test
{
    private:
    int data;
    public:
    void setData(int set)
    {
        data=set;
    }
    int getValue()
    {
        return data;
    }
};

int main()
{
    Test *t2;
    t2=new Test;
    t2->setData(10);
    cout<<t2->getValue();
}