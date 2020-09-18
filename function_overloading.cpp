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

      //setpro() function is overloaded for getting either two integer input or three integer input

     int setpro(int n1,int n2)
          {
         num1=n1;
          num2=n2;
          }

      int setpro(int n1,int n2,int n3)
          {
         num1=n1;
          num2=n2;
        num3=n3;
          }
  
// pro() function is overloaded for returning the product of either two values or three values

     int pro (int num1,int num2,int num3) 
          {
         return num1*num2*num3;
          }

      int pro(int num1,int num2)
         {
        return num1*num2;
         }

        };
        
        
  int main(){

       int x,y,z;
       class  multiplication mul;
  cout<<" Enter three values: ";
  cin>>x>>y>>z;
  mul.setpro(x,y); //Two integer input
  mul.setpro(x,y,z); // Three integer input
   cout<<"Multiplication of first two values: "<<mul.pro(x,y)<<endl<<"Multiplication of all the values: "<<mul.pro(x,y,z);
    
       return 0;

}
        
        

   
    
    
    
     
    
 

    
