#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter the string array size:";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=stoi(arr[0]);
    string maxS=arr[0];
    for(int i=0;i<n;i++){
        int x=stoi(arr[i]);
        if(x>max) {
            max=x;
            maxS=arr[i];
      }
    }
    cout<<max<<" "<<maxS;
    

}