#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter tha size of string";
  cin>>n;
  cout<<endl;
  string s;
  cin>>s;
  if(s.length()!=n){
    cout<<"size does not match";
    return 0;
  }
  for(int i=0;i<n;i++){
    if(i%2==0){
      s[i]='a';
    }
  }
  cout<<s;
}