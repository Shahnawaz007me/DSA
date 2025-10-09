#include<iostream>
using namespace std;
int main(){
  int x;
  //sizepf(data type ) batata hai ki memory m isne kitna size liya hai jaise int ne 4 bytes liya hai.
  cout<<sizeof(int)<<endl<<sizeof(char)<<endl<<sizeof(float)<<endl<<sizeof(long long)<<endl;
  // & y address batata hai or y random hota hai value pe depend nahi karat har bar change hota chahe value same ho y nahi.
  cout<<&x;
}