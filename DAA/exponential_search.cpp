#include<iostream>
using namespace std;

int main()
{
    int n,key,end=1,flag=0, i;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number to be searched:";
    cin>>key;
    if(arr[0]==key)
    {
        flag=1;
    }
    while(arr[end]>key)
    {
        end*=2;
    }
    for(i=end/2;i < n ;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<" NOT Present.";
    }
    else
    {
        cout<<" key is preset at " << i+1;
    }
}
