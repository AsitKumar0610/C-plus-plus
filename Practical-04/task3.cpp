//Practical-4[task-3]
#include<iostream>
//using namespace std;
namespace first
{
    int sum(int a,int b)
    {
        return a+b;
    }
}
namespace second
{
    float sum(float a,float b)
    {
        return a+b;
    }
}
int main()
{
    cout<<firstsum(1,2)<<endl;
    cout<<secondsum(1.2,2)<<endl;
    cout<<secondsum(1,2.1)<<endl;
    cout<<secondsum(1.1,2.1)<<endl;
}
