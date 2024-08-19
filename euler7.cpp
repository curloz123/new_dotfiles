#include <iostream>

using namespace std;


int chk_prime(int num1,int &count){
  if (num1==2){
    count++;
    return 1;
  }
  for (int i=2;i<=num1/2;i++){
    if(num1%i==0){
      return 0;
    }
  }
  count++;
  return 1;
}
int main(){
  int count=0;
  int i=2;
  int final;
  while(count!=10001){
    chk_prime(i,count);
    final=i;
    i++;

  }
  cout<<final;
  return 0;
}
