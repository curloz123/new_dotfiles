#include <iostream>
#include <cmath>
using namespace std;
class square{ 
  public:
    int sumofsquares(int num1);
    int squareofsum(int num1);
};
int square :: sumofsquares(int num1){
  return ((num1)*(num1+1)*(2*num1+1))/6;
}
int square :: squareofsum(int num1){
  return pow(((num1)*(num1+1)/2),2);
}
int main(){
  square number;
  int num1;
  cout<<"Enter number to find solution : ";
  cin>>num1;
  cout<<"Calculating the answer ...."<<endl;
  cout<<"The difference in sum of squares and square of sum of given number is : ";
  cout<<number.squareofsum(num1)-number.sumofsquares(num1);
  return 0;
}
