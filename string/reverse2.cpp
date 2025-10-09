#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  while(true){
    cout<<"enter the string of length greater then 5";
    cin>>str;
    if(str.length()>5){
      break;
    }else{
      cout<<"enter number";
    }
  }
  int n=str.length();
  reverse(str.begin()+1,str.begin()+5);
  cout<<str;
}