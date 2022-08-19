#include<iostream>
using namespace std;

int main()
{
    string msg= "Hi";
    string msg2= "hello";
    auto sum = [msg](string a, string b) ->string { return msg +a + " " +b;};
    cout <<sum(" im","ceren")<<endl;
    auto sum2 = [=](string a, string b) -> string{return msg +" "+ msg2 + a +" " + b;};
    cout<<sum2(" im","ceren")<<endl;
    return 0;
}
