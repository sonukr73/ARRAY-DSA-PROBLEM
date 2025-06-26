#include<iostream>
using namespace std;
int peakindex(int arr[],int n){
    int start=0;
    int end=n-1;
   int mid=start+ (end-start)/2;
   while(start<=end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    int mid=start+ (end-start)/2;
   }
   return start;
}
int main(){
    int odd[5]={1,3,5,6,4};
   cout<<"the peak value is"<<peakindex(odd,5)<<endl;

}