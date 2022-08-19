#include<iostream>
#include<array>
using namespace std;

int main()
{
    std::array<int, 3> testarray1;
    std::array<int, 3> testarray2={10,20,30};
    cout<<"At "<<testarray2.at(2)<<endl;
    cout<<"[] "<<testarray2[2]<<endl;
    cout<<"fornt() "<<testarray2.front()<<endl;
    cout<<"back() "<<testarray2.back()<<endl;
    testarray1.fill(0);
    testarray1.swap(testarray2);
    testarray1.empty();
    cout<<"size() "<<testarray2.size()<<endl;
    cout<<"max_size() "<<testarray2.max_size()<<endl;
    return 0;
}