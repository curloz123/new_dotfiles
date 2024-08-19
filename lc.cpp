#include <iostream>

using namespace std;

int main(){
  int nums[]={1,2,3,4,5,6,8};
  int target=9;
  int size=sizeof(nums)/sizeof(nums[0]);

  for(int i=0 ; i<size-1 ; i++){
    for(int j=i+1 ; j<size ; j++){
      if (nums[i]+nums[j]==target){
        cout<<"["<<i<<","<<j<<"]"<<endl;
      }
    }  
  }
  return 0;
}

