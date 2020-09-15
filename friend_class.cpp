//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Friend class implementation

#include<iostream>
using namespace std;

class B;

class A{
      int val;
    public:
    A(){
     cin>>val; }
    friend int sum(A,B);
     };
class B{
      int val;
     public:
    B(){
          cin>>val;
       }
    friend int sum(A,B);
    };
 int sum(A v1, B v2){
      cout<<v1.val+v2.val;}
  int main(){
     A a;
     B b;
     sum(a,b);
     return 0; }  
    
    
   
