#include<iostream>
using namespace std;
typedef struct employee{
	int eid;
	char favchar;
	float salary;
}ep;
union brocode{
	int brono;
	char broname;
	};
int main(){
	ep suresh;
	suresh.eid=1;
	suresh.favchar='c';
	suresh.salary=15000;
	cout<<suresh.eid<<endl;
  cout<<suresh.favchar<<endl;
  cout<<suresh.salary<<endl;

	brocode raju;
	raju.brono=1;

	cout<<raju.brono<<endl;


return 0;
}
