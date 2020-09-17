//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Multiple inheritance implementation

#include<iostream>
using namespace std;

class A{

      public:
    
       int a;
    
     //Getting user input 1
    void get_a(){
     cout<<"Enter value 1: ";
        cin>>a;
         }
        
        };
        
class B{

       public:
    
        int b;
        
      //Getting user input 2    
      void get_b(){
     cout<<"Enter value 2: ";
       cin>>b;
          }
        
        };
 
    //class C is derived from class A and class B   
class C : public A ,public B {
          
          public:
        
        void sum(){
         cout<<"Sum of two values: "<<a+b<<endl;
          }
        
        };
        
int main (){

         class C obj;
        obj.get_a();
        obj.get_b();
        obj.sum();
        
        return 0;

        }
