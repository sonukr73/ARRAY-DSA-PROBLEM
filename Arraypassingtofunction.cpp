#include<iostream>
using namespace std;
void display(int arr[],int size){   // int* a
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int arr[],int size){   // int* b
   arr[0]=100;
   
}
int main(){
    int arr[]={2,3,5,9,12,34,56};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}