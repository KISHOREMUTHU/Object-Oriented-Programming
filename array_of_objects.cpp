//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Array of Objects implementation

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
   int i;
    class data d[5];
  for(i=0;i<5;i++){
         d[i].getdata();//getting data
           }
        
       cout<<endl;
    
  for(i=0;i<5;i++){
    d[i].displaydata();//displaying data
      }
    
    return 0;
 
       }
