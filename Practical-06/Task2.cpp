//task2

#include<bits/stdc++.h>
using namespace std;
int main ()

{

string s ;
cout << "Enter a String "<< endl ;

getline(cin,s);

string t = s ;

reverse(t.begin(), t.end());

if(s==t)
      cout << "String is a palindrome"<<endl;

else
      cout << "String is not a palindrome"<<endl;
      
}
