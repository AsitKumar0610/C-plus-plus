//Task 6

#include<bits/stdc++.h>
using namespace std;
int main ()
{
string str = "HELLO";
cout << "String : "<<str<<endl ;
cout << "String address : "<<&str<<endl;
str[0] = 'j';
cout << "String : "<<str << endl;
cout << "String address : "<<&str<<endl ;
cout << "Therefore strings are mutable ";
}
