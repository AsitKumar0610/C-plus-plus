#include<iostream>
using namespace std ;
int main()
{
int n, count =0 ;
cout << "Enter the size of the array" << endl ;
cin >> n ;
int a[n] ;
cout << "Enter the elements of the array : ";
for(int i = 0 ; i < n ; i++)
{
cin >> a[i] ;
}

for(int i = 0 ; i < n ; i++){
	for(int j = i + 1 ; j < n ; j++){
		if(a[i] > a[j])
		{
			count ++ ;
		}
	}
}
cout << "No. of inversions : " << count ;
}
