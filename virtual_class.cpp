#include <iostream>
#include <cmath>
using namespace std;

class Base1{ 
  protected:
    int num1;
  public:
    void tk_num1(void){
      cout<<"Give num1 : ";
      cin>>num1;
      cout<<"Exiting Base class"<<endl;
    }
};

class Derived1 : virtual public Base1{
  public:
    void calc_num1(void){
      cout<<"Entering Derived 1"<<endl;
      cout<<"Root of num1 is "<<sqrt(num1)<<endl;
      cout<<"Exiting Derived 1"<<endl;
    }
};

class Derived2 : virtual public Base1{
  public:
    void calc_num1_2(void){
      cout<<"Entering Derived 2"<<endl;
      cout<<"Square of num1 is "<<pow(num1,2)<<endl;
      cout<<"Exiting Derived 2"<<endl;
    }
};

class Baby : public Derived1 , public Derived2{ 
  public:
    void finale(void){
      cout<<"Sum of sqrt. and sq. is "<<sqrt(num1)+pow(num1,2)<<endl;
    }
};
int main(){
  Baby a1;
  a1.tk_num1();
  a1.calc_num1();
  a1.calc_num1_2();
  a1.finale();
  return 0;
}

