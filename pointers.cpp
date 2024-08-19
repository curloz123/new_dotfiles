#include<iostream>
using namespace std;
int main(){
    //today lets learn pointers
    //it is a data type that is used to hold address of other data types
     
    int a=3;
    int* b=&a;
    cout<<"Address of a is : "<<&a<<endl;
     cout<<"value at Address of b is : "<<*b<<endl;
 return 0;
}



