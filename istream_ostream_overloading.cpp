//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Istream, Ostream overloading implementation

#include<iostream>
#include<string.h>
using namespace std;
 
class test {

     int val;

     public:

    test(){
     val=0; // Default constructor
          } 

    friend ostream & operator << (ostream &,test &);
    friend istream & operator >> (istream &,test &);
   
    };

   //ostream is the keyword for overloading "<<" operator

  ostream & operator <<(ostream &kout,test &temp)
           {
         kout<<temp.val;
        return kout;
           }

 // istream is the keyword for overloading ">>" operator 

  istream & operator >>(istream &kin, test &temp)
          {
          kin>>temp.val;
         return kin;
          }
        
    int main(){

         test t;
         cin>>t; //Overloading ">>" operator
         cout<<t; //Overloading "<<" operator

        return 0;

       }
