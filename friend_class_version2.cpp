//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Friend class implementation - example 2

#include<iostream>
using namespace std;

class sample;

class example{
      int a;
    
     public:
    
      void getdata ()
             {
            cout<<"Enter data : ";
              cin>>a;
             }
            
      friend class sample;
    
    };
    
 class sample{
         
         public:
        void printdata(example e)
            {
              e.getdata();
             cout<<"Data is: "<<e.a<<endl;
              }
            
            };
            
 int main (){

     class sample s1;
     class example e1;
     s1.printdata(e1);
      return 0;
    
    }
    
