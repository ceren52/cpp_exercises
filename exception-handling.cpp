#include<iostream>
using namespace std;

int main()
{
    int num1,num2,total;
    cout<<"enter 2 numbers: ";
    cin>>num1>>num2;
    try
    {
        if(num2==0)
        throw num2;
        else
        total=num1/num2;
        cout<<"outpu is: "<<total<<endl;
    }
    catch(int x)  //catch(...) default olan
    {
       cout<<"exception is divide by"<<x<<endl;
    }
    
}