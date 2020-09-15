//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Friend function implementation

#include<iostream>
#include<string.h>
using namespace std;
    
class box{
   private:
   double l,b;
public:
   friend double printarea(box bo);
   double set_lb(double len ,double bre){
   l=len;
    b=bre;}
  };

double printarea (box bo){
    
  cout<<" Area of Box : "<<bo.l*bo.b;
    }
    
    int main(){
      int x,y;
     
      class box bo;
    cout<<"Enter length and breadth: ";
    cin>>x>>y;
     bo.set_lb(x,y);
     printarea ( bo );
     return 0;
    }
