#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n1,int arr2[],int n2,int res[],int ressize){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        res[k++]=arr1[i++];
        res[k++]=arr2[j++];
    }
    while(i<n1){
        res[k++]=arr1[i++];
        
    }
    while(j<n2){
        res[k++]=arr2[j++];
       
    }
}
int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int ressize=n1+n2;
     int res[ressize];
     merge(arr1,n1,arr2,n2,res,ressize);
     for (int i = 0; i < ressize; i++) {
        cout << res[i] << " ";
    }

}