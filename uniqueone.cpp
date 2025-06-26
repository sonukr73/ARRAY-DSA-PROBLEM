#include<iostream>
int uniquefun(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
using namespace std;
int main(){
    int arr[5]={18,2,3,2,3};
    cout<<  uniquefun(arr,5)<<endl;
    return 0;
}