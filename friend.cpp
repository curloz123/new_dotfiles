#include <iostream>

using namespace std;
class complex{ 
  int a , b;
  public:
  void set_complex(int c1 , int c2){
    a=c1;
    b=c2;
  } 
  void get_complex(){
    cout<<a<<" + "<<b<<"i"<<endl;
  }
  friend complex sum_complex(complex v1 , complex v2);
};
complex sum_complex(complex v1 , complex v2){
  complex comp3;
  comp3.set_complex(v1.a+v2.a , v1.b+v2.b);
  return comp3;
}
int main(){
  complex comp1 , comp2 , frnd;
  comp1.set_complex(3,4);
  comp2.set_complex(5,7);
  comp1.get_complex();
  comp2.get_complex();
  frnd=sum_complex(comp1,comp2);
  frnd.get_complex();
  return 0;
}
