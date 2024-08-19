#include <iostream>

using namespace std;
int flag,a;
void chk_prime(int num1){
	int factor=0;
	for(int i=2;i<num1;i++){
		if(num1%i==0){
			break;
		}
		else{
			factor+=1;
			a=i;
		}
	}	
	if (factor==(num1-2)){
			// cout<<"prime"<<endl;
			flag=1;
			}
	else{
		// cout<<"not prime"<<endl;
		flag=0;
	}
	// cout<<a<<endl;
}

void get_factors(int num2){
	for(int j=2;j<num2;j++){
		if(num2%j==0){
		chk_prime(j);
		if (flag==1){
			a=j;
		}
	
	}
}

	cout<<a;
}
int main(){
	get_factors(10);
	return 0;
}
