#include<iostream>
using namespace std;
int threedivisible(int number){
  if (number%3==0){
    v1=1;
  }
  return v1;
}
int fivedivisible(int number){
  if (number%5==0){
    v2=1;
  }
  return v2;
}

int threedivisible(int number);
int fivedivisible(int number);
int main(){
  int number1,v1=0,v2=0;
  cout<<"Enter number : ";
  cin>>number1;
  threedivisible(number1);
  fivedivisible(number1);
  
  if(v1==1){
    if (v2==1){
      cout<<"Number is divisible by both 3 and 5"<<endl;
}
    else{
      cout<<"Number is only divisible by 3"<<endl;
    }
}
  else{
    if (v2==1){
      cout<<"Number is only dvisible by 5"<<endl;
    }
    else{
      cout<<"number is divisible by none"<<endl;
    }
  }
return 0;
}



