//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//All types of constructors with implementation


#include<iostream>
#include<string.h>
using namespace std;
 
class point{
   int a;
   int x;
   int *c;
   public:
 
  
  void show(){
       cout<<*c;}//Display dynamic constructor printing
  point(){
   a=100;
   cout<<a;}//Default constructor
  ~point(){
     cout<<"Freeing memory"<<endl;
     }//Destructor
  point(int x1){
      c=new int;
       x=x1;
       *c=x1;}//Dynamic and Parameterized constructor initialisation
   point(point &p){
      x=p.x;}//Copy constructor
   int get(){
    cout<<x;}
    };
 
int main(){

  cout<<"Default constructor:";
   class point p1;
 cout<<endl;
  
   point p2(10);
cout<<"Parameterised Constructor:";
 p2.get();
cout<<endl;
 point p3(p2);
cout<<"Copy Constructor:";
  p3.get();
cout<<endl;
point *p4=new point(60);
cout<<"Dynamic constructor:";
  p4->show();
cout<<endl;
delete p4;
 
   

  
return 0;
}
  
