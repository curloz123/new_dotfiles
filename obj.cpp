#include <iostream>
using namespace std;
class vectors{
  int a , b;
  static int count;
  public:
    void mk_vect(int h , int k);
    void sum_vect(vectors v1, vectors v2);
    void disp_vect(void);
};
void vectors :: mk_vect(int h , int k){
  a=h;
  b=k;
  count++;
}
void vectors :: sum_vect(vectors v1 , vectors v2){
  a=v1.a + v2.a;
  b=v1.b + v2.b;
  count++;
}
void vectors :: disp_vect(void){
  cout<<"vector "<<count<<" is "<<a<<"i + "<<b<<"j"<<endl;
}
int vectors :: count=0;
int main() { 
  vectors v1 , v2 , v3;
  v1.mk_vect(3,4);
  v1.disp_vect();
  v2.mk_vect(5,3);
  v2.disp_vect();
  v3.sum_vect(v1 , v2);
  v3.disp_vect();
  return 0;
}
