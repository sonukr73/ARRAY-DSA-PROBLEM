#include<iostream>
using namespace std;
int main(){
    int arr[]={6,3,2,4,1,7,1,5};
      int n=sizeof(arr)/sizeof(arr[0]);
      int m=n-1; 
      int sum=0;
  
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=m*(m+1)/2;
    cout<<sum-s;
}