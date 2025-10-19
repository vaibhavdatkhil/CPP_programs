#include<iostream>

using namespace std;

class Base
{
   public:
      int i,j;
       
      void fun()
      {
        cout<<"inside base fun\n";
      }

      void gun()
      {
        cout<<"inside base gun\n";
      }

      void sun()
      {
        cout<<"inside base sun\n";
      }

      void mun()
      {
        cout<<"inside base bun\n";
      }   
};

class Derived:public Base
{
   public:
       int x; 

       void gun()
      {
        cout<<"inside derived gun\n";
      }

      void sun()
      {
        cout<<"inside derived sun\n";
      }

      void run()
      {
        cout<<"inside derived run\n";
      }

      void mun()
      {
        cout<<"inside derived mun\n";
      }
};

int main()
{
    Base *bp1=new Base(); //nocasting
    Derived *dp1=new Derived(); //nocasting
    Base *bp2=new Derived(); //Upcasting
   // Derived *dp2=new Base();//Downcasting       Error

    return 0;
}