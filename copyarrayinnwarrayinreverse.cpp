#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
vector<int> v1;
v1.push_back(2);
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);
v1.push_back(8);
v1.push_back(9);
display(v1);
vector<int> v2(v1.size());
int j=v1.size()-1;
for(int i=0;i<v2.size();i++){
    //  size()-1=i+j
    v2[i]=v1[j];
    j--;
}
display(v2);


}