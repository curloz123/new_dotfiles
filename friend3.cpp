#include <iostream>

using namespace std;
void display(int disp){
  cout<<disp<<endl;
}
class Y;
class X{ 
  int num1;
  public:
  void var(int a){
    num1=a;
    display(num1);
  } 
  friend void swap(X&,Y&);
};
class Y{
  int num2;
  public:
  void var(int b){
    num2=b;
    display(num2);
  }
  friend void swap(X&,Y&);
};
void swap(X &x1 , Y &y1){
  int temp=x1.num1;
  x1.num1=y1.num2;
  y1.num2=temp;
  display(x1.num1);
  display(y1.num2);
}
int main(){
  X h;
  h.var(9);
  Y k;
  k.var(8);
  swap(h,k);

  return 0;
}
