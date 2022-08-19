#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

void square(int *ptr)
{
int temp=*ptr;
temp=temp*temp;
*ptr=temp;

}
int main()
{
    int number=10;
    cout<<number;
    square(&number);
    cout<<number;
}