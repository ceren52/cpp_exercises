#include<iostream>
using namespace std;

class Person
{
    private:
    int weight;
    public:
    Person(int w=0)
    {
        weight=w;
    }
    friend bool operator>(Person x,Person y);
    friend bool operator<(Person x,Person y);
};

bool operator<(Person x,Person y)
{
return x.weight < y.weight;
}
bool operator>(Person x,Person y)
{
return x.weight > y.weight;
}

int main()
{
    int w1,w2;
    cout<<"kilonu gir jon"<<endl;
    cin>>w1;
    cout<<"kilonu gir rick"<<endl;
    cin>>w2;

    Person jon(w1);
    Person rick(w2);

    if (jon > rick)
    {
        cout<<"jon is heavy"<<endl;
    }

    else if(jon < rick)
    {
        cout<<"rick is heavy"<<endl;
    }

}