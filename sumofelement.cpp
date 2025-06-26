#include<iostream>
using namespace std;
int ARRAYsum(int arr[],int n){
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
return sum;
}

int main(){
    int size;
    cout<<"enter size of array element";
    cin>>size;
    int num[5];
    for(int i=0;i<size;i++){
        cout<<"enter the element"<<endl;
        cin>>num[i];
    }
    cout<<"the sum of all element in an array:" << ARRAYsum(num,size)<<endl;
}
