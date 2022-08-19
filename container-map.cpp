#include<iostream>
#include<map>
using namespace std;

int main()
{
    std::map<int,string> map1;
    std::map<int,string>map2={{101,"ve"},{102,"ce"},{103,"de"}};
    map2[102]="ti";

    for(map<int,string>::iterator i=map2.begin();i !=map2.end();i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<" ";
    }

    cout<<endl;
    cout<<"value at 102: "<<map2.at(102)<<endl;
    cout<<"[] "<<map2[102]<<endl;

    map2.at(102)="ke";
    map2.insert(pair<int,string>(106,"fe"));
    map2.insert(make_pair(288,"hi"));

     for(map<int,string>::iterator i=map2.begin();i !=map2.end();i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<" ";
    }
}
