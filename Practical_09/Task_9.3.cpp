//Task 9.3

#include<iostream>
using namespace std;
class Student{

  string NAME;
  int Roll_no;
  public:
    static int count;
 void setValue(string name,int rollno){
  NAME=name;
  Roll_no=rollno;
  count++;
 }
 static int display(){
 return count;
 }
};
int Student::count=0;
int main(){
    Student obj1,obj2,obj3,obj4,obj5;
    obj1.setValue("SHIKHAR",50);
      obj2.setValue("SHUBHANG",57);
      obj3.setValue("PRAKHAR",40);
        obj4.setValue("ABHISHEk",3);
     cout<<"NO< OF TIMES MEMBER FUNCTION CALLED : "<<Student::count;
        
}
