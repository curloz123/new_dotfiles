#include <iostream>
using namespace std;
class complex{
  int a, b;
  public:
    void sum(int v1, int v2){
      a=v1;
      b=v2;
    }
    void sumbydata(complex o1 , complex o2){
      a=o1.a + o2.a;
      b=o1.b + o2.b;
    }
    void display(void){
      cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main() {
  complex c1,c2,c3;
  c1.sum(1,2);
  c1.display();
  c2.sum(3,4);
  c2.display();
  c3.sumbydata(c1 , c2);
  c3.display();
    return 0;
        }
