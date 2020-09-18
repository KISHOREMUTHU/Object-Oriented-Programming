//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Static data member and member function implementation


#include<iostream>
using namespace std;


class data{

      static int a;  //static data member

     public :

    // static member function
  static int pre_increment()
    {
   cout<<"Value after function called: "<<++a<<endl;
    }

        };

 int data::a=10; 

int main()
{
 
  class data a;

 a.pre_increment(); //Static member works when function is called
 a.pre_increment();
 
 return 0;
      
}
