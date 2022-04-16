#include<iostream>
using namespace std;
int main ()
{
    int n , i , j;
    int arr[] = {10,20,25,30,40};
    n = sizeof(arr)/sizeof(arr[0]);
    
    for(i = 0 ; i  <= n/2 ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(arr[i] + arr[j] == 50)
            {
                cout << "(" << i << ", " << j << ")" ; 
            }
        }
    }
    
}
