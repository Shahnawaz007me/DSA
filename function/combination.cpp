#include<iostream>
using namespace std;
int combination(int n,int r){
  int fn=1,fr=1,fnr=1,c;
  for(int i=1;i<=n;i++){
    fn=fn*i;
  }
  for(int i=1;i<=r;i++){
    fr=fr*i;
  }
  for(int i=1;i<=(n-r);i++){
    fnr=fnr*i;
  }
  c=fn/(fr*fnr);
  return c;
}
int main(){
  int n,r;
  cout<<"enter the n and r:";
  cin>>n>>r;
  if(n>r&&r!=0){
    cout<<"combination of n and r:"<<combination(n,r);
  }else {
    cout<<"enter the vakid n and r.";
  }
}