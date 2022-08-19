#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

const int MAX=5;

void printArray(int *ptr)
{
    for (int i=0;i<MAX;i++)
    {
        cout<<*ptr++; //pointers go to next address
    }
}
int main()
{
    int number[MAX]={10,20,30,40,50};
    printArray(number);  //&number[0]
}

