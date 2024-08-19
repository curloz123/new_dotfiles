#include <iostream>
using namespace std;
class vectors{
  int x1,y1,x2,y2;
  public:
   void get_vect(int a,int b,int c,int d);
   void chk_vect();
};
void vectors :: get_vect(int a, int b,int c,int d){
  x1=a;
  y1=b;
  x2=c;
  y2=d;
}
void vectors :: chk_vect(){
  cout<<((x1*x2 + y1*y2)<1);
}
int main() { 
  vectors vect1;
  int x1,y1,x2,y2;
  cout<<" x1 y1 x2 y2";
  cin>>x1>>y1>>x2>>y2;
  vect1.get_vect(x1,y1,x2,y2);
  vect1.chk_vect();
  return 0;
}
