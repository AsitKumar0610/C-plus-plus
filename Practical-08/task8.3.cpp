//task 8.3

#include<iostream>
using namespace std;
int main(){
int a=10;
int *p=&a;
int **q=&p;
cout<<a<<" ";
*p=20;
cout<<*p<<" " ;
**q=30;
cout<<**q<<endl;
return 0;
}
