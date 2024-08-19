#include <iostream>

using namespace std;
class number{ 
  int num1;
  public:
  number(){
    num1=0;
  }
  number(int a);
  number(number &ref);
  void display();
};

number :: number(int a){
  num1=a;
}

number :: number(number &ref){
  cout<<"Copy constructor called : \n";
  num1=ref.num1;
}
void number :: display(){
  cout<<num1<<"\n";
}

int main(){
  number x,y,z(45);
  x.display();
  y.display();
  z.display();
  number z1(z);
  z1.display();
  return 0;
}
