#include<iostream>
#include<thread>
using namespace std;

void threadfunc1(int start, int end)
{
    for(int i = start;i <= end; i++)
    {
        cout<<"helllo"<<endl;
    }
}

void threadfunc2(int start, int end)
{
    for(int i = start;i <= end; i++)
    {
        cout<<"hi"<<endl;
    }
}


int main()
{
    clock_t start,end,start2,end2;
    start=clock();

    threadfunc1(1,25000);
    threadfunc2(25000,1);

    end = clock();
    double totaltime = (end-start) / double(CLOCKS_PER_SEC);
    cout<<"there is no multithreadingtotal time taken: "<<totaltime;
    cout<<endl<<CLOCKS_PER_SEC; 
    
    start2=clock();
    thread functest1(threadfunc1,1,25000);
    thread functest2(threadfunc2,25000,1);
    functest1.join();
    functest2.join();
    end2=clock();

    double totaltime2 = (end2-start2) / double(CLOCKS_PER_SEC);
    cout<<"there is multithreadingtotal time taken: "<<totaltime2;
    cout<<endl<<CLOCKS_PER_SEC;

    return 0;
}