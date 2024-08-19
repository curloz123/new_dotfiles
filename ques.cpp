// take 2 points and commute dist. bw them
#include <iostream>
#include <cmath>
using namespace std;
class distanc{
  int x , y;
  public:
   void get_pnt(int a , int b);
   friend void dist(distanc h,distanc k);
};
void distanc :: get_pnt(int a , int b){
  x=a;
  y=b;
}
void dist(distanc h , distanc k){
  float dists;
  dists=((h.x)*(h.x)-(k.x)*(k.x))+((h.y)*(h.y)-(k.y)*(k.y));
  cout<<pow(dists,0.5);
}
// class distanc{ 
//   int x,y;
//   static int  count;
//   public:
//   void take_x(){
//     int a;
//     cout<<"give x coordinate of point "<<count<<" : ";
//     cin>>a;
//     x=a;
//   }
//   void take_y(){
//     int b;
//     cout<<"give y coordinate of point "<<count<<" : ";
//     cin>>b;
    
//     y=b;
//     count++;
//   }
//   friend void dist(distanc h , distanc k); 
// };
// void dist(distanc h , distanc k){
//   float sqx,sqy,sumsq;
//   sqx =pow(h.x , 2)+pow(k.x , 2);
//   sqy =pow(h.y , 2)+pow(k.y , 2);
//   sumsq=sqx+sqy;
//   cout<<pow(sumsq,0.5);
// }
// int distanc :: count=1;
int main(){
  distanc a1 , b1;
  // a1.take_x();
  // a1.take_y();
  // b1.take_x();
  // b1.take_y();
  a1.get_pnt(3,4);
  b1.get_pnt(0,0);
  dist(a1,b1);
  
  return 0;
}
