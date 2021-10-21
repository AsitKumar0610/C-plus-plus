//task 8.6

#include<bits/stdc++.h>
using namespace std;
void seq(int n){
if(n==1){
return ;
}
seq(n-1);
cout<<n*(pow(n-1,n-1)+n-1)<<" ";
return;
}
int main(){
int n;
cin>>n;
seq(n);
return 0;
}
