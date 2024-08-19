#include <iostream>
#include<string>
using namespace std;
class strings{ 
  string s;
  public:
  void take_str();
  void chk_str();
  string chg_str();
  
};
void strings :: take_str(){
  cout<<"Enter a number : ";
  cin>>s;
}
void strings :: chk_str(){
  for (int i=0; i<s.length(); i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
      cout<<"Not binary";
      break;
    }
  }
}

string strings :: chg_str(){
  for(int i=0; i<s.length();i++){
    if(s.at(i)=='1'){
      s.at(i)='0';
    }
    else if (s.at(i)=='0'){
      s.at(i)='1';
    }
  }
  return s;
}
int main() { 
 
 strings str;
 str.take_str();
 str.chk_str();
 cout<<str.chg_str();
  return 0;
}
