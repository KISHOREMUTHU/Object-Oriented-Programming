//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Pointer to Object Implementation

#include<iostream>
using namespace std;

class point{

      int a;
   
     public:
     
    void getdata (){
     cout<<"Enter data: ";
       cin>>a;
       }
    
    void printdata(){
        cout<<"Data is: "<<a<<endl;
           }
       };
    
 int main (){

       class point p;//object
      class point *obj;//pointer to object
        obj=&p; //initialising object pointer
     
      obj->getdata(); //arrow mark represents the function of object pointer
      obj->printdata();
        
        return 0;
        
    }
