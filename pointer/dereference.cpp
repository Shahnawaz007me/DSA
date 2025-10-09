#include<iostream>
using namespace std;
int main(){
  int x=10;
  int *p=&x;
  x=122;
  cout<<*p<<endl;
  //*p ka matlab yaha y hai ki p ke address pe jao or us address pe jo value rakhi hai usko print kar do y hum koi bhi opreation kar sakte hai usse. jaise hum isko update kar rahe ahi matlab y hua ki ab x ki value change ho gayi hai.
  *p=134;
  cout<<*p;
}