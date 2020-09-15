//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Function definition outside the class

#include<iostream>
using namespace std;


class data{
   int a;
    public:
    void getdata ();
    void displaydata();
    };
 
void data::getdata(){
  cout<<"Enter data: ";
    cin>>a;
    
    }
void data:: displaydata (){
      cout<<"Data is : "<<a<<endl;
        }
        
 int main (){

    class data d;
    d.getdata();
    d.displaydata();
    return 0;
 
       }
