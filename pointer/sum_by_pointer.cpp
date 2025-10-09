#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"a"<<endl<<"b\n";
  cin>>a>>b;
  int *p=&a;
  int *po=&b;
  int sum=*p+*po;
  cout<<sum;
}