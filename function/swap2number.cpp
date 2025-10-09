#include<iostream>
using namespace std;
void swap(int &a,int &b){
  int temp;
  temp=a;
  a=b;
  b=temp;
  // cout<<a<<endl<<b;
}
int main(){
  int a,b;
  cout<<"enter a:";
  cin>>a;
  cout<<"enter b:";
  cin>>b;
  cout<<"swap a and b.\n";
  cout<<"after swaping:";
  swap(a,b);
  cout<<a<<" "<<b;
}