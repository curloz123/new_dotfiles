#include <iostream>

using namespace std;
void fib(int &a , int &b){
  int temp=a+b;
  a=b;
  b=temp;
}
int main(){
  int a=1,b=1;
  for(int i=1;i<=10;i++){
    cout<<b<<" ";
    fib(a,b);
  }
  return 0;
}
