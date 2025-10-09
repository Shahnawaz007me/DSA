#include<iostream>
using namespace std;
int main(){
  int x=3;
  int *p1=&x;
  int **p2=&p1;
  cout<<&x<<endl;
  cout<<p1<<endl;
  cout<<*p2;//hum double pointer se bhi x ki value ko chane y print kara sakte hai.
}