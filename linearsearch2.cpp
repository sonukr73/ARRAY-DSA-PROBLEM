#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     int x;
    cout<<"enter the element to search in arrary";
    cin>>x;
    bool flag=false;    //false->> not present
    for(int i=0;i<=n-1;i++){
      if(arr[i]==x) flag=true;
    }
    if(flag==true)
    cout<<"present";
    else
    cout<<"no present";
        
    }
    
    