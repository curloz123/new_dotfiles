#include <iostream>

using namespace std;
class people{ 
  static int count; 
  public:
  people(){
    count++;
    cout<<"Making object "<<count<<" pls wait ..!!"<<endl;
    cout<<"done...!!!!!\n";
    cout<<"\n";
  }
  ~people(){
    cout<<"Destroying object "<<count<<" pls wait ..!!"<<endl;
    cout<<"done...!!!!!\n";
    cout<<"\n";

    count--;
  }
};

int people :: count=0;


int main(){
  cout<<"Entered main function"<<endl;
  people p1;
  {
    cout<<"Entered the object block\n"<<endl;
    cout<<"Creating two sub-objects -->>"<<endl;
    people p2,p3;
  }
  cout<<"exiting the object block\n";

  return 0;
}
