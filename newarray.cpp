#include <iostream>

using namespace std;
class item{ 
  int item_id[100];
  int item_price[100];
  static int count;
  int id , price;
  public:
  void set_item();
  void get_item();
};  
void item :: set_item(){
  cout<<"ID of item "<<count+1<<" : ";
  cin>>id;
  cout<<"Price of item "<<count+1<<" : ";
  cin>>price;
  item_id[count]=id;
  item_price[count]=price;
}
void item :: get_item(){
  cout<<"ID of item number "<<count+1<<" is "<<item_id[count]<<endl;

  cout<<"Price of item number "<<count+1<<" is "<<item_price[count]<<endl;

  count++;

} 
int item :: count = 0;
int main(){
  item ram , shyam;
  ram.set_item();
  ram.get_item();

  ram.set_item();
  ram.get_item();

  shyam.set_item();
  shyam.get_item();
  return 0; 
}           
