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
            
      cons(int x,int y){
            a=x;
            b=y;
            }
            
      cons(double x,double y){
            a=x;
            b=y;
            }
            
       void add(){
          cout<<"Sum: "<<a+b<<endl;
            }
            
            };
   
int main(){

      class cons c1(5,10);
       c1.add();
    
       class cons c2(15.5,20.34);
       c2.add();
    
       return 0;
    
    }
