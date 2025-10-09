// Given an array of marks of students, if the
// mark of any student is less than 35 print its roll
// number. [roll number here refers to the index of the
// array.]
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter tha number:";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter tha element:";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   for(int i=0;i<n;i++){
//     if(arr[i]<35){
//       cout<<"fail roll number:"<<arr[i]<<endl;
      
//     }
//   }
// }
// Calculate the sum of all the elements in the given array.
// #include<iostream>
// using namespace std;
// int main(){
//   int n,sum=0;
//   cout<<"enter tha elements numbers:";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter tha element:";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//   }
//   cout<<"sum of all tha elements in tha given array:"<<sum;
// }
// Find the element x in the array . Take array and x as input
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter tha elements numbers:";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter tha element:";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   int x;
//   bool found=false;
//   cout<<"enter tha element you want to check:";
//   cin>>x;
//   for(int i=0;i<n;i++){
//     if(arr[i]==x){
//       found=true;
//       break;
//     }
//   }
//   if(found==true){
//     cout<<"present";
//   }else cout<<"absent";
// }
// Find the maximum value out of all the elements in tha array
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter tha elements numbers:";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter tha element:";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   int max=arr[0];
//   for(int i=0;i<n;i++){
//     if(arr[i]>max){
//       max=arr[i];
//     }
//   }
//   cout<<"largest value:"<<max;
// }
// Find the second largest element in the  array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter tha elements numbers:";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cout<<"enter tha element:";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   int max=INT_MIN;
//   int max2=INT_MIN;
//   for(int i=0;i<n;i++){
//     if(arr[i]>max){
//       max2=max;
//       max=arr[i];
//     }else if(arr[i]>max2&&arr[i]!=max){
//       max2=arr[i];
//     }
//   }
//   if(max2==INT_MIN){
//     cout<<"max2 does not exit.";
//   }else cout<<"max2:"<<max2;
// }
// Count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter tha elements numbers:";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter tha element:";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int x;
  cout<<"enter tha number you want to count how many number is greater than x:";
  cin>>x;
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]>x){
      count++;
    }
  }
  cout<<count<<" elements is greater than "<<x;
}  