#include<iostream>
using namespace std;
void bro( void );
int sum(int a , int b){
  int c = a+b;
  cout<<c;
  return c;
}
int main(){
  int c , d;
  cin>>c;
  cin>>d;
  sum(c,d);
  bro();
  return 0;
}
void bro(){
  cout<<"Bro this was void function"<<endl;
}
