//task 8.4

#include<iostream>
using namespace std;
void factorial(int n){
int fact=1;
while(n)
{
  fact=fact*n;
  n--;
}
cout<<fact<<" ";
return;
}
int main(){
int n;
cin>>n;
factorial(n);
return 0;
}
