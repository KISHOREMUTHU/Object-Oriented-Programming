//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Single inheritance with private access specifier implementation

#include<iostream>
using namespace std;

class base{
       public:

        int a;
        
        //Getting data from user 
      int get(){
         cout<<"Enter data: ";
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
            print();
            b=a+10;
            cout<<"Data in derived class: "<<b<<endl;
             }
            
            };
            
int main (){

      class derived d; // declaring object of derived class 
       d.show();.  //d.get() and d.print() doesn't work directly because derived class is private
    //d.show() contains printing conditions of both base class and derived class
    
        return 0;
        
   //Output is compiler dependent
        
    }
