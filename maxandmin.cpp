#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<min)
       min=arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max;
    cout<<min;
     
    }
    
    