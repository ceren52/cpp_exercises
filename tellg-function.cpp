#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("my.txt");
    int pos;
    pos = fin.tellg();
    cout<<"ilk: "<<pos<<endl;
    fin>>ch;
    pos = fin.tellg();
    cout<<"ikinci: "<<pos<<endl;
    fin.close();
}