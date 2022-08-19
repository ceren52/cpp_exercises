#include<iostream>
#include<thread>
using namespace std;

class test
{
    public:
    void threadfunc1(int start, int end)
    {
        for(int i = start;i <= end;i++)
        {
            cout<<"hi"<<endl;
        }
    }
    void threadfunc2(int start,int end)
    {
        for (int i = start; i <=end; i++)
        {
            cout<<"hello"<<endl;
        }
    }
};

int main()
{
    test obj;
    thread th1(&test::threadfunc1,&obj,1,50);
    thread th2(&test::threadfunc2,&obj,50,100);
    th1.join();
    th2.join();

    return 0;
}

