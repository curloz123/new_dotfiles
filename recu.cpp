#include <iostream>
using namespace std;
int fib(int n){
  if(n<2){
    return 1;
  }
  return fib(n-1)+fib(n-2);
}
int factorial(int n){
  if(n==0){
    return 1;
  }
  while (n>=1){
   return n * factorial(n-1);
  }
  return 0;
}
int main() {
    int a;
    cin>>a;
   cout<<fib(a);
   
    return 0;
        }
//done 
