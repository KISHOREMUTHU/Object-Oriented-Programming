//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Function overloading implementation

#include<iostream>
#include<string.h>
using namespace std;
    
class multiplication{
private:
  int num1,num2,num3;

public:
     int setpro(int n1,int n2){
         num1=n1;
          num2=n2;}
      int setpro(int n1,int n2,int n3){
         num1=n1;
          num2=n2;
        num3=n3;}
     int pro (int num1,int num2,int num3){
         return num1*num2*num3;}
      int pro(int num1,int num2){
        return num1*num2;}

        };
        
        
  int main(){

       int x,y,z;
       class  multiplication mul;
  cout<<" Enter three values: ";
  cin>>x>>y>>z;
  mul.setpro(x,y);
  mul.setpro(x,y,z);
   cout<<"Multiplication of first two values: "<<mul.pro(x,y)<<endl<<"Multiplication of all the values: "<<mul.pro(x,y,z);
    
       return 0;
}
        
        

   
    
    
    
     
    
 

    
