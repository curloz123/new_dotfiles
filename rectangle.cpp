#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for (int a=1;a<=9;a++){
        cout<<"-";
    }
    cout<<"-"<<endl;
    for(int b=1;b<=5;b++){
    cout<<"|"<<setw(9)<<"|"<<endl;
    }
 for (int a=1;a<=9;a++){
        cout<<"-";
    }
    cout<<"-"<<endl;
return 0;
}
