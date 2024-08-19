#include<iostream>
using namespace std;
void addswap(int &x, int &y){
  int sum=x+y;
  x=sum;
  y=sum;
}
int main(){
  int a,b;
  cin>>a>>b;
  addswap(a,b);
  cout<<a<<endl<<b;
return 0;
}
