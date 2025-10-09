#include<iostream>
using namespace std;
int main(){
  // int x=4;
  // int *ptr=&x;
  // cout<<ptr;//y adsress print kardega
  // ptr=ptr+1;
  // cout<<endl;
  // cout<<ptr;//ab jo address hoga vo change hoga vo data type ke hisab se change hota jaise int hai to 4 byte move char m 1.
  int x=4;
  int*ptr=&x;
  cout<<*ptr<<endl;
  *ptr=*ptr+1;//ek to y tarika hai increment ka y decrement ka
  cout<<*ptr<<endl;
  (*ptr)++;// hum *ptr++ nahi kar sakte humhe ()y use karna hi padta hai pointer m increment ke time ager tum aisa karte ho.
  cout<<*ptr;

}