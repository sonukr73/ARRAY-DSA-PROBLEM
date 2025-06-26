#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
   cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>& v){
   for(int i=0,j=v.size()-1;i<=j;i++,j--){
       int temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
return;
}
 void reversepart(  int j,vector<int>& a){
    int i=0;
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
display(v);
 // reverse
//  int i=0;
//  int j=v.size()-1;
//  while(i<=j){
//     // swap v[i] v[j]
//     int temp;
//     temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//  }
// 2nd method
// for(int i=0,j=v.size()-1;i<=j;i++,j--){
//        int temp;
//     temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
// }

int q;
cout<<"kaha tk rkna hai";
cin>>q;
reverse(v);
display(v);
reversepart(q,v);
display(v);
}