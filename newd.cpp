#include <iostream>

using namespace std;
class BankDeposit{ 
  int principal;
  int time;
  float interest;
  float returnvalue;
  public:
    BankDeposit(){};
    BankDeposit(int p, float r, int t);
    BankDeposit(int p, int r , int t);
    void display(void);
};
BankDeposit :: BankDeposit(int p,float r,int t){
  principal=p;
  interest=r;
  time=t;
  returnvalue=principal;
  for (int i=0;i<t;i++){
    returnvalue=returnvalue*(1+interest);
  }
}
BankDeposit :: BankDeposit(int p,int r,int t){
  principal=p;
  interest=float(r);
  time=t;
  returnvalue=principal;
  for (int i=0;i<t;i++){
    returnvalue=returnvalue*(1+interest);
  }
}
void BankDeposit :: display(void){
  cout<<returnvalue;
}
int main(){
  int a,b,r;
  float R;
  cin>>a>>b>>r>>R;
  BankDeposit bd1,bd2;
  bd1=BankDeposit(a,b,r);
  return 0;
}     
