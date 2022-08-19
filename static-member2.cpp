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
    }
    static int stat;
    static int getStat()
    {
        stat++;
        return stat;
    }
};

int Alpha::stat=0;

int main()
{
    Alpha a1;
    cout<<"value using object: "<<a1.getStat()<<endl;
    cout<<"value using class name: "<<Alpha::getStat()<<endl;
}
