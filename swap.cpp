#include <iostream>
using namespace std;
void swap(int &c , int &d){
  int temp;
  temp=c;
  c=d;
  d=temp;
}
int main() { 
  int a=3 , b=4;
  cout<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<a<<" "<<b<<endl;

  return 0;
}
