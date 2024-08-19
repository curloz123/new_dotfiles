


#include <iostream>


using namespace std;

class base1 {
  public:
    void greet(){
      cout<<"Hello world"<<endl;
    }
};

class base2 {
  public:
    void greet(){
      cout<<"Hello world again"<<endl;
    }
};

class derived : public base1 , public base2{
  public:
    void greet(){
      cout<<"Hello world again"<<endl;
    }
};



int main(){
  derived d1;
  d1.greet();
  return 0;
}

