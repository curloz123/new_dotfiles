#include <iostream>

using namespace std;

class base{ 
  int data1;
  public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};

void base :: set_data(){
  data1=24;
  data2=37;
}

int base :: get_data1(){
  return data1;
}

int base :: get_data2(){
  return data2;
}

class derived :  base{
  int data3;
  public:
   void process_data();
   void display_data();
};

void derived :: process_data(void){
  set_data();
  data3=data2*get_data1();
}

void derived :: display_data(void){
  cout<<"data1 is : "<<get_data1()<<endl;
  cout<<"data2 is : "<<data2<<endl;
  cout<<"data3 is : "<<data3<<endl;
}

int main(){
  derived der;
  der.process_data();
  der.display_data();
  return 0;
}
