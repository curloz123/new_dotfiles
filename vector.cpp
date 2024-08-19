#include <iostream>
using namespace std;
class vectors{
  int a , b;

  friend vectors vec_sum(vectors v1 , vectors v2);
  public:
  void vec_take(int v1 , int v2){
    a=v1;
    b=v2;
  }
  void vec_disp(void){
    cout<<"the vector is "<<a<<"i"<<" + "<<b<<"j"<<endl;
  }
};
vectors vec_sum(vectors v1 , vectors v2){
  vectors c;
  c.vec_take(v1.a+v2.a , v1.b+v2.b);
  return c;
}

int main() { 
  vectors p , q , nev;
  p.vec_take(3,4);
  p.vec_disp();
  q.vec_take(4,5);
  q.vec_disp();
  nev=vec_sum(p,q);
  nev.vec_disp();
  return 0;
}

// you cannot do nev.vec_sum();
// it cannot directly access any member , need to do obj_name.member_name()
