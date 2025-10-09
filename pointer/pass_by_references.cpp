#include<iostream>
using namespace std;
void swap(int *p1,int *p2){
  int temp;
  temp=*p1;
  *p1=*p2;
  *p2=temp;
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
  swap(&a,&b);
  cout<<a<<" "<<b;
}