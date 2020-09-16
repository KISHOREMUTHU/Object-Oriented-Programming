//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Unary operator overloading implementation

#include<iostream>
using namespace std;

class unary{
     int a;
    
    public:
    
     unary(){
    cout<<"Enter data: "; //getting data using constructor
     cin>>a;
         }
        
     void operator -(){
        a=2*a; //overloading '-' operator for multiplying by 2
            }
            
      void print(){
         cout<<"Data after overloading: "<<a<<endl; //printing data
        }
    

    };
    
 int main (){

       class unary u;
       -u; //operator overloading in object
        u.print();
        
        return 0;
    }
