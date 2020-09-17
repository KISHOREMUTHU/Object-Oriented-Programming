//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Single inheritance with private access specifier implementation - Example 2

#include<iostream>
using namespace std;

class base{
       
        int a;
   
      public:
        
        //Getting data from user
      int get(){
       
           a=10;
          return a;
          }
        
        void print(){
           cout<<"Data in base class: "<<a<<endl;
              }
            
        };
        
class derived : private base{
         public:
        
          int b;
        
        //Function inside derived class 
         void show (){
            print();//This will print either garbage value or zero (compiler dependent)
            b=get()+10;//This line will derive the get() function from base class
            cout<<"Data in derived class: "<<b<<endl;
            print(); // This print() function will print 10 because ,the base class function is derived in the previous statement 
             }
            
            };
            
int main (){

      class derived d;// declaring object of derived class 
       d.show(); //d.get() and d.print() doesn't work directly because derived class is private
  //d.show() contains printing conditions of both base class and derived class
    
        return 0;
        
 
        
    }
