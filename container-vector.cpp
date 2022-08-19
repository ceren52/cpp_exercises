#include<iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> testvector1;
    cout<<"Size: "<<testvector1.size()<<endl; //0
    std::vector<int> testvector2={10,20,30};
    cout<<"at "<<testvector2.at(2)<<endl;  //more safe 2.satırda ne var at function
    cout<<"[] "<<testvector2[2]<<endl;  //bu da ikinci satırda ne var
    testvector2.push_back(40);
    testvector2.push_back(50);
    testvector2.push_back(60);
    
    for (vector<int>::iterator i=testvector2.begin();i !=testvector2.end();i++)
    {
        cout<<*i<<" "; //10 20 30 40 50 60
    }
    cout<<endl;
    testvector2.pop_back(); //en sondakini siliyor

      for (vector<int>::iterator i=testvector2.begin();i !=testvector2.end();i++)
    {
        cout<<*i<<" "; //10  20 30 40 50
    }
    cout<<endl;
    vector<int>::iterator i= testvector2.begin();
    testvector2.insert(i,0);

    vector<int>::iterator y= testvector2.begin();
    testvector2.erase(y);

      for (vector<int>::iterator i=testvector2.begin();i !=testvector2.end();i++)
    {
        cout<<*i<<" ";
    }




}