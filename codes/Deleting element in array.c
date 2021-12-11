#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot, i, elem, j, found=0;
    cout<<"Enter size of Array : ";
    cin >> tot ;
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<=(tot-1); j++)
            {
                arr[j] = arr[j+1];
            }
            found++;
           // i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    
    for(i = 0 ; i < tot ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
