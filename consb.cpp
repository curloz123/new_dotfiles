#include <iostream>
#include <cmath>
using namespace std;
class point{ 
  int x,y;
  
  public:
  point(int a , int b){
    x=a;
    y=b;
  }
  void display(){
    cout<<x<<" , "<<y<<endl;
  }

       friend void dist(point  h , point k); 
 };
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
     
 //         y=b;
 //         count++;
 //       }
 //       friend void dist(distanc h , distanc k); 
 //     };
     void dist(point h , point k){
       float sqx,sqy,sumsq;
       sqx =pow(h.x , 2)+pow(k.x , 2);
       sqy =pow(h.y , 2)+pow(k.y , 2);
       sumsq=sqx+sqy;
       cout<<pow(sumsq,0.5);
     }
     // int point :: count=1;

     
 
 
 
int main(){
  point a(0,0);
  a.display();
  point b(3,4);
  b.display();
  dist(a,b);
  return 0;
}
