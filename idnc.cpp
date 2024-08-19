#include<iostream>
using namespace std;
int money(int interest, float factor=1.01){
  return interest*factor;
}
int main(){
  int a;
  cin>>a;
  cout<<money(a)<<endl;
  int b; 
  float c=1.1 ;
  cin>>b;
  cout<<money(b,c)<<endl;  //use user defined ones first then devs defined ones
  return 0;
}
