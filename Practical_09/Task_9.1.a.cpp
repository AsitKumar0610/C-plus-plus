//Task 9.1 a

#include<iostream>
using namespace std;
class student{
    public:
  int roll_no;
  long int phone_no;
  string address;
};
int main(){
    student Sam,John;
    Sam.roll_no=20;
    Sam.phone_no=7464840180;
    Sam.address="Char khamba dehradu";
    John.roll_no=45;
    John.phone_no=9730485738;
    John.address="Ghantaghar dehradun";
    cout<<"The details of Sam are :"<<" Roll no: "<<Sam.roll_no<<" Phone no. : "<<Sam.phone_no<<" Address : "<<Sam.address;
    cout <<endl;
    cout<<"The details of John are :"<<" Roll no: "<<John.roll_no<<" Phone no. : "<<John.phone_no<<" Address : "<<John.address;
}
