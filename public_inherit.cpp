//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Single inheritance with public access specifier implementation

#include<iostream>
using namespace std;

class base{
       public:

        int a;
        
        //Getting data from user
        void getdata(){
         cout<<"Enter data: ";
           cin>>a;}
        
        void print(){
           cout<<"Data in base class: "<<a<<endl;
              }
            
        };
        
class derived : public base{
         public:
        
          int b;
        
        //Function inside derived class 
         void show (){
            print();
            b=a+10; //you can add any command on your own
            cout<<"Data in derived class: "<<b<<endl;
             }
            
            };
            
int main (){

      class derived d;
    
       d.getdata(); // getting data in derived class from base class
       d.show(); //d.show() contains printing conditions of both base class and derived class
    
        return 0;
        
    }
