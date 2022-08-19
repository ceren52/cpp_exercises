#include<iostream>
using namespace std;

class Alpha
{
    private:
    int a;
    int b;
    public:
    Alpha()
    {
    a=5;
    b=5;
    stat++;
    }    
    static int stat;
};
int Alpha::stat=0;
int main()
{
    Alpha a1;
    Alpha a2;
    cout<<"value using a1 obj: "<<a1.stat<<endl;
    cout<<"value using a2 obj: "<<a2.stat<<endl;
    cout<<"value using class name"<<Alpha::stat<<endl;

}