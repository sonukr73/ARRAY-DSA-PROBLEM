#include<iostream>
#include<vector>
using namespace std;
int main(){ 
vector<int> v;
int x;
cout<<"enter the target";
cin>>x;
int n;
cout<<"enter the array size";
cin>>n;
cout<<"enter the element of array";
for(int i=0;i<n;i++){
    int q; 
    cin>>q;
    v.push_back(q);
}
for(int i=0; i<=v.size()-2;i++){
    for(int j=i+1;j<=v.size()-1;j++){
        if(v[i]+v[j]==x){
        cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}

}