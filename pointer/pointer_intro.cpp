#include<iostream>
using namespace std;
int main(){
  int x=10;
  //declaration of pointer phele hamhe data type batana jota hai ki hum jis ka address save kar rahe hai uska data type kya hai fir hum & use karte hai address ko mention batane ke liye.ab hua y ki p naam ka pointer banega fir usme x ka address jaiga ab hum p se x ka address save kar sakte hai. 
  int *p=&x;
  cout<<&x<<endl<<p;
} 