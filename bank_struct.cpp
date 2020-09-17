//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// Bank system using structures

#include<iostream>
#include<string.h>
using namespace std;
    
struct bank{
   int acno;
   char name[25];
   double amount;
    };  //structure declaration

int main(){
  struct bank b[5]; //array of structures

  int i;

 cout<<"Reading details:"<<endl<<endl;

 for(i=0;i<5;i++){
     cout<<"Person - "<<i+1<<endl;
    cout<<"Enter account number: ";
    cin>>b[i].acno;
    cout<<"Enter person's name: ";
     cin>>b[i].name;
    cout<<"Enter present amount: ";
     cin>>b[i].amount;
         }
    cout<<endl<<endl;
 
cout<<"Displaying Details"<<endl;

 for(i=0;i<5;i++)
{
      cout<<"Person - "<<i+1<<endl;
      cout<<"Account number: "<<b[i].acno<<endl;
      cout<<"Person's name: "<<b[i].name<<endl;
       cout<<"Present Amount: "<<b[i].amount<<endl<<endl;
}

    }
