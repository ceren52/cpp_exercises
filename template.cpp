#include<iostream>
#include<string>

using namespace std;

template <class T>
T sum(T x, T y)
{
    return x+y;
}

int main()
{
    cout<<sum<int>(3,7)<<endl;
    cout<<sum<double>(3.0,7.0)<<endl;
    cout<<sum<float>(3.4,7)<<endl;

    return 0;
}