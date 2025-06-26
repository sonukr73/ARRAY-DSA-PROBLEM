#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& a){ // a->> 12 1 9 6 10
    a[0]=100;   // a->> 100 1 9 6 10
}
int main(){ 
vector<int> v;
v.push_back(12);
v.push_back(1);
v.push_back(9);
v.push_back(6);
v.push_back(10);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
change(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

}