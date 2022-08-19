#include<iostream>
#include<list>

using namespace std;

int main()
{
    std::list<int>list1;
    std::list<int>list2={1,2,3,};

    list<int>::iterator i=list2.begin();
    list2.insert(i,10);

    for (list<int>::iterator i = list2.begin(); i !=list2.end();i++)
    {
        cout<<*i<<" ";
    }
    list2.push_back(20);
    list2.push_front(10);
    list2.pop_back();
    list2.pop_front();
    list2.reverse();
    list2.swap(list1);
    list1.size();
    list1.sort();
    list1.merge(list2);
    for (list<int>::iterator i = list2.begin(); i !=list2.end();i++)
    {
        cout<<*i<<" ";
    }
}