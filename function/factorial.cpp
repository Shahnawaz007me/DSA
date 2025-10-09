#include<iostream>
using namespace std;
int fac(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}
int main(){
  int n;
  cout<<"enter the number:";
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<fac(i)<<endl;
  }
}