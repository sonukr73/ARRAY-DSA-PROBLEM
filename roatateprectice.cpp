#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
   cout<<a[i]<<" ";
    }
    cout<<endl;
}
 void reversepart( int i, int j,vector<int>& a){
    while(i<=j){
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
    }
    return;
}
int main(){ 
vector<int> v;
v.push_back(2);
v.push_back(5);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
int n=v.size();
display(v);
int k=2;
   //rotate array by kth
   if(k>n){
    k=k%n;
   }
   reversepart(0,n-k-1,v);
   reversepart(n-k,n-1,v);  
   reversepart(0,n-1,v);
   display(v);
   

}