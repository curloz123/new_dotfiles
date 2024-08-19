#include <iostream>
#include<string>
using namespace std;
int chk_palindrome(string a){
  for(int i=0;i<(a.length())/2;i++){
    if (a.at(i)!=a.at(a.length()-1-i)){
      return 0;
    }
  }
  return 1;
}
void digit_numbers(void){
  int num1,num2,product;
  for(int i=100;i<=999;i++){
    for(int j=100;j<=999;j++){
      if (chk_palindrome(to_string(i*j)) && i*j>product){
        product=i*j;
        num1=i;
        num2=j;
      }
    }
  }
  cout<<num1<<"*"<<num2<<endl;
}
int main(){
  digit_numbers();
  return 0;
}
