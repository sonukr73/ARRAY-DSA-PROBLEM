#include<iostream>
using namespace std;
int main(){
    int arr[]={22,31,2,45,66,7,3,4,7};
    int* ptr=arr;
    for(int i=0;i<=8;i++){
     cout<<*ptr<<" ";
     ptr++;
    }
  ptr=arr;   // ptr pointing to first element
  *ptr=8;  //ptr[0]=8
  ptr++;   // ptr pointing to 2nd element
  *ptr=9;
  ptr--;   // ptr pointing to first element
  cout<<endl;
  for(int i=0;i<=8;i++){
    cout<<*ptr<<" ";
    ptr++;
  }
  ptr=arr;

}