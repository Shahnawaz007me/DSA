#include<iostream>
using namespace std;
void fun(int n,int *ptr3,int *ptr4){
  *ptr4=n%10;
  while(n>9){
    n=n/10;
  }
  *ptr3=n;
}
int main(){
  int n;
  cout<<"enter the number:";
  cin>>n;
  int fd,ld;
  int *ptr1=&fd;
  int *ptr2=&ld;
  fun(n,ptr1,ptr2);
  cout<<fd<<" "<<ld;
}