#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    void show()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
};
class cuboid: public Rectangle
{
    public:
    int height;
    void display()
    {
        cout<<height<<endl;
    }
};

int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=20;
    r.show();
    cout<<"-----------------"<<endl;
    cuboid c;
    c.length=10;
    c.breadth=10;
    c.height=2;
    c.display();

}