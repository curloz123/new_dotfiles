#include <iostream>

using namespace std;

int main(){
  int b=0;
  int flag=0;
  while(b!=20){
    flag++;
    int count=0;
    for(int i=1;i<=20;i++){
      if(flag%i==0){
        count+=1;
      }
    }
    if(count==20){
      cout<<flag;
    }
    b=count;
  }  
  return 0;
}
