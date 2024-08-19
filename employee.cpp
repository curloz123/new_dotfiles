#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class employee{ 
  // protected:
    string name;
    int id;
  public:
      void tk_data(){
      cout<<"Give name : ";
      cin>>name;
      cout<<"Give id : ";
      cin>>id;
    }  
      void display(){
        cout<<"Name : "<<name<<endl;
        cout<<setw(4)<<right<<"Id : "<<id<<endl;
      };
};

class phy_eng : public employee{
  string lang;
  public:
    void tk_extra_data(void){
    cout<<"Language used : ";
    cin>>lang;
  }
  void extra_display(void){
    cout<<setw(4)<<right<<"Language using : "<<lang;
  }
};

class char_design : public employee{
  string software;
  public:
    void tk_extra_data(void){
    cout<<"Software used : ";
    cin>>software;
  }
  void extra_display(void){
      cout<<setw(4)<<right<<"Software using : "<<software<<endl;
  }
};


int main(){
  employee walter;
  phy_eng hank;
  char_design gus;
  walter.tk_data();
  hank.tk_data();
  hank.tk_extra_data();
  gus.tk_data();
  gus.tk_extra_data();
  walter.display();
  hank.display();
  hank.extra_display();
  gus.display();
  gus.extra_display();

  return 0;
}
