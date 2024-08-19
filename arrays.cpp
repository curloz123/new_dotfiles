#include<iostream>
using namespace std;
int main(){
    int  marks[]={1,2,4,5};
    int *p=marks;
    cout<<"value of *p = "<<*p<<endl;
 cout<<"value of *p+1 = "<<*(p+1)<<endl;
  cout<<"value of *p+3 = "<<*(p+2)<<endl
;
  cout<<"value of *p+3 = "<<*(p+3)<<endl;

    return 0;

}
