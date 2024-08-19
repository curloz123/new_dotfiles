#include <iostream>

using namespace std;

class base{ 
  protected:
    int num1;
    int num2;
};

class derived : private base{
  int num3;
  public: 
  void set_data(){
    num1=27;
    num2=34;
    num3=num1*num2;
  }
  void display(){
    cout<<num1<<num2<<num3;
  }
};

int main(){
  derived num;
  num.set_data();
  num.display();
  return 0;
}
