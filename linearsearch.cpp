#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            return 1;
    }
    return 0;

}
int main(){
    int arr[10]={1,2,3,-9,4,5,6,7,9,-2};
    cout<<"enter the element search for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not presnet"<<endl;
    }
}