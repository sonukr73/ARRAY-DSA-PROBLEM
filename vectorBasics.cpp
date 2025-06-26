#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you not to need mention the size
    // inserting | input  do not use []
    v.push_back(6);
    // cout<<v.size();
     cout<<v.capacity();
    v.push_back(1);
    //  cout<<v.size();
     cout<<v.capacity();
    v.push_back(9);
    //  cout<<v.size();
     cout<<v.capacity();
    v.push_back(0);
    //  cout<<v.size();
     cout<<v.capacity();
    // if you want to update | or access| print to use  this v[]
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout<<v[3]<<endl;
}
