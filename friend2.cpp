#include <iostream>

using namespace std;
class Y;
class X{ 
  int data;
  public:
  void setdata(int a){
    data=a;
  }
  friend  void sum(X , Y);
};
class Y{ 
  int num;
  public:
  void setdata(int b){
    num=b;
  }

    friend   void sum(X , Y);
}; 
void sum(X a1 , Y b1){
  cout<<a1.data+b1.num;
}
int main(){
  X a;
  a.setdata(3);
  Y b;
  b.setdata(4);
  sum(a,b);
  return 0;
}
