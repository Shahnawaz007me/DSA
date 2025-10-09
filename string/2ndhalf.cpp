#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  while(true){
    cout<<"enter the string of length even";
    cin>>str;
    if(str.length()%2==0){
      break;
    }else{
      cout<<"enter even number";
    }
  }
  int n=str.length();
  cout<<str.substr(n/2,n/2);
  cout<<str;
}