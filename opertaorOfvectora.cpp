  #include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
     v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
   cout<<"size is" <<v.size()<<endl;
   cout<<"capacity is" <<v.capacity()<<endl;
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   cout<<"size is" <<v.size()<<endl;
   cout<<"capacity is" <<v.capacity()<<endl;




//    for(int i=0;i<v.size(); i++){
//     cout<<v[i]<<" ";
//    }
//    v.pop_back();
//    cout<<endl;
//    for(int i=0;i<v.size(); i++){
//     cout<<v[i]<<" ";
//    }
   
}
