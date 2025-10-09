#include<stdio.h>
int main(){
  int num;
  printf("enter tha number:");
  scanf("%d",&num);
  int isprime=1;
  if(num<=1){
    isprime=0;
  }else{
    for(int i=2;i<num/2;i++){
      if(i%2==0){
        isprime=0;
      }
    }
  }
  if(isprime){
    printf("number is prime");

  }else printf("number is not prinme");

}