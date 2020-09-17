//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//constructor overloading implementation

#include<iostream>
using namespace std;

class  cons{
         double a,b;
        
        public:
       
      cons(){
            a=0;
            b=0;
            }

    //Parameterised Constructor for int addition 
       
      cons(int x,int y){
            a=x;
            b=y;
            }

     //Parameterised Constructor for double addition
       
      cons(double x,double y){
            a=x;
            b=y;
            }
      
   // Printing data 
      
       void add(){
          cout<<"Sum: "<<a+b<<endl;
            }
            
            };
   
int main(){

      class cons c1(5,10); //Constructor is overloaded for both int and double
       c1.add();
    
       class cons c2(15.5,20.34);
       c2.add();
    
       return 0;
    
    }
