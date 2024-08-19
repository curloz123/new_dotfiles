#include <iostream>
using namespace std;
class item{
  int item_price[100];
  int item_id[100];
  int id,price;
  static int count;
  public:
    void get_data(void);
    void display_data(void);
};
void item :: get_data(void){
  cout<<"Give id : ";
  cin>>id;
  item_id[count]=id;
  cout<<"Give price : ";
  cin>>price;
  item_price[count]=price;
  count++;
}
void item :: display_data(void){
  for ( int i=0; i<count; i++ ){
    cout<<"Price of item with id "<<item_id[i]<<" is "<<item_price[i]<<endl;
  }
}

int item :: count=0;

int main() {
  item dukaan;
  dukaan.get_data();
  dukaan.get_data();
  dukaan.get_data();
  dukaan.get_data();
  dukaan.get_data();
  dukaan.display_data();

  return 0;
 }
