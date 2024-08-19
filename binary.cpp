#include <iostream>
#include<string>
using namespace std;
class binary{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void oc(void);
		void display(void);
	};
void binary :: read(void){
	cout<<"Enter string : ";
	cin>>s;
}

void binary :: chk_bin(void){   
	for (int i = 0 ; i<s.length() ; i++){
		if ( s.at(i)!='0' && s.at(i)!='1' ){
			cout<<"Not binary"<<endl;
		}
	}
}
void binary :: oc(void){
	for (int i = 0 ; i<s.length() ; i++){
		if(s.at(i) == '1'){
			s.at(i)='0';
		}
		else if(s.at(i)=='0'){
			s.at(i)='1';
		}
	}
}
void binary :: display(void){
	for (int i = 0 ; i<s.length() ; i++){
		cout<<s.at(i);
	}
}


int main(){
		binary b;
		b.read();
		b.chk_bin();
		b.oc();
		b.display();
		cout<<endl;
		return 0;
				}
