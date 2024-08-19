#include <iostream>

using namespace std;
class complex{
  int a,b;
  public:
    complex(int,int);
    void display();
};
void complex :: display(void){
  cout<<a<<" + "<<b<<"i"<<endl;
}
complex :: complex(int x , int  y){
  a=x;
  b=y;
}
int main(){
  complex c(4,5);
  complex x2(3,6);
  c.display();
  x2.display();
  return 0;
}
