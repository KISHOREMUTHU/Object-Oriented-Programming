//# Object-Oriented-Programming
//Here I can publish my Object Oriented Programs

// This pointer implementation

#include<iostream>
using namespace std;


class fruit_basket{

private:
  int apple,mango;
       
public:

   void total()
    {
     cout <<"Total number of objects: "<<mango+apple<<endl;
    }

    void setmango(int man)
       {
       mango=man;
       }

    int getmango(void)
       {
       return mango;
       }

    int getapple(void)
       {
       return apple;
        }

    void setapple(int app)
        {
       apple=app;
        }
     
    
  fruit_basket operator+(const fruit_basket& fru)
      {
     fruit_basket f;
     f.apple=this->apple+fru.apple; // "this" keyword is implemented here
     f.mango=this->mango+fru.mango;
     return f;
       }

};

int main()
{

 class fruit_basket f1;
  f1.setmango(10);
  f1.setapple(20);

cout<<"Number of apples:"<<f1.getapple()<<endl;
cout<<"Number of mangoes:"<<f1.getmango()<<endl;

  f1.total();
 
 return 0;
       
}


