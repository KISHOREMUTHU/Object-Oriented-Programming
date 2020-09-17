//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

//Binary operator overloading implementation

#include<iostream>
using namespace std;

class bin{
        int real,img;
        
        public:
   
     //Parameterised Constructor
       bin(int r,int i){
           real=r;
           img=i;
              } 
      
    //Binary operator overloading function ("+" sign)

        bin operator +(bin b){
           int creal,cimg;
           creal=real+b.real;
            cimg=img+b.img;
  cout<<"Real part: "<<creal<<endl<<"Imaginary part: "<<cimg<<endl<<endl;         
             }
            
     //Printing data
       void show (){
         cout<<"Real part: "<<real<<endl<<"Imaginary part: "<<img<<endl;
             }
        
      //Binary operator overloading using friend function ("-" sign)

            friend void operator -(bin,bin);//friend function overloading           
             };
            
    void operator -(bin b1,bin b2){
    
             int creal,cimg;
            creal=b1.real-b2.real;
            cimg=b1.img-b2.img;
 cout<<"Real part: "<<creal<<endl<<"Imaginary part: "<<cimg<<endl;         
                  
             }
            
            
   int main (){

      class bin b1(5,10); //object 1
      class bin b2(15,20);//object 2
     
        b1+b2; //Using '+' operator for overloading two objects
        b1-b2;//Using '-' operator for friend function overloading of two objects
        
        return 0;
    }         
