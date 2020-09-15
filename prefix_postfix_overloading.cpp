//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Prefix and postfix overloading

#include<iostream>
using namespace std;

class opera{
   int a,b,c;

   public:

  opera(){
    a=10;
    b=20;
    c=30;}

   //Postfix function
   opera operator ++(int var){
     a=a+100;
      b=b+100;
      c=c+100;
     }
    
     //Prefix function
    opera operator --(){
       a=a-100;
       b=b-100;
       c=c-100;
   }
    
    void print(){
     cout<<a<<b<<c;}
    
    };
int main (){
    class opera o;
     o.print(); 
     cout<<endl;

     
     
    
     --o;
     o.print();
     o++;
      o.print();
     }

    
