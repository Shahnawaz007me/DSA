#include<iostream>
using namespace std;
int lcm(int a,int b){
  int lcm=1;
  for(int i=1;i<=(a*b);i++){
    if(max(a,b)*i%(min(a,b))==0){
      lcm=i;
    }
  }
  return lcm;
}
int main(){
  int a,b;
  cout<<"enter a:";
  cin>>a;
  cout<<"enter b:";
  cin>>b;
  cout<<"LCM of a and b:"<<lcm(a,b);
}