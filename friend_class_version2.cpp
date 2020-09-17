//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Friend class implementation - example 2

#include<iostream>
using namespace std;

class sample; //friend class

class example{

      int a;
    
     public:

          //Getting user input
    
      void getdata ()
             {
            cout<<"Enter data : ";
              cin>>a;
             }
            
      friend class sample; //friend class declaration
    
    };
    
 class sample{
         
         public:

      // Copying the value of a class in an object
      //Printing data

        void printdata(example e)
            {
              e.getdata();
             cout<<"Data is: "<<e.a<<endl;
              }
            
            };
            
 int main (){

     class sample s1;
     class example e1;
     s1.printdata(e1); //friend class functions here
      return 0;
    
    }
    
