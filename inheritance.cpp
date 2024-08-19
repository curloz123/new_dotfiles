#include <iostream>

using namespace std;

// Base class
class employee{ 
  public:
  int id;
  float salary;
  employee(int empid){
    id=empid;
    salary=34000;
  }
  employee(){}
};

// Derived class
class programmer : public employee{
  int language_code;
  public:
    programmer(int empid,int lg_code){
      id=empid;
      language_code=lg_code;
      cout<<language_code<<endl;

      cout<<id<<endl;
    }
};

int main(){
  programmer harry(1001,2500);
  harry.id=1002;
  cout<<harry.id<<endl;
  return 0;
}
