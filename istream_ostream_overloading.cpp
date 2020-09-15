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
    val=0;
    }
    friend ostream & operator << (ostream &,test &);
    friend istream & operator >> (istream &,test &);
    };
  ostream & operator <<(ostream &kout,test &temp){
         kout<<temp.val;
        return kout;}
  istream & operator >>(istream &kin, test &temp){
          kin>>temp.val;
         return kin;}
        
    int main(){
       test t;
         cin>>t;
         cout<<t;
        return 0;}
