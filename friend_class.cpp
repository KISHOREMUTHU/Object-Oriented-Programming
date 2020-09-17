//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Friend class implementation

#include<iostream>
using namespace std;

class B; //friend class 

class A{

      int val;

    public:

    A(){
     cin>>val; 
      }

    friend int sum(A,B); //friend function for addition

     };

class B{

      int val;

     public:

    B(){
          cin>>val;
       }

    friend int sum(A,B);//same friend function

    };

 int sum(A v1, B v2){

      cout<<v1.val+v2.val; // Adding values of two different classes in friend function
  
}

  int main(){

     A a;
     B b;
     sum(a,b);
     return 0; 

}  
    
    
   
