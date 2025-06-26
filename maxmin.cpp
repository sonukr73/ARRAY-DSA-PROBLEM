#include<iostream>
using namespace std;
#include<climits>
int getmin(int num[],int n){
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        // if(num[i]<min){
        //     min=num[i];
   // }
        mini=min(mini,num[i]);
        }
    
    return mini;
}
int getmax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        // // if(num[i]>max){
        // //     max=num[i];
        // }
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
int main(){
    int size;
    cout<<"enter the size of input to check"<<endl;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cout<<"enter the element"<<endl;
        cin>>num[i];
    }
    cout<<"the maxmimum value is"<<getmax(num,size)<<endl;
     cout<<"the minimum value is"<<getmin(num,size)<<endl;

}