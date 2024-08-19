#include<iostream>
using namespace std;
int main(){
	int a;
        cout<<"Enter no. to check : ";
	cin>>a;
	for (int i=2;i<a;i++){
		if (a%i==0){
			cout<<"Not prime number";
			break;
		}
		if(i==a-1){
			cout<<"Prime number";
		}
	}
return 0;
}
