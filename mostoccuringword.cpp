#include<iostream>
#include<string.h>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string s=" aman is a teacher and He is a BPSC mentor";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int  maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else
        count=1;
        maxcount=max(maxcount,count);
    }
    count=1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else
        count=1;
        if(count==maxcount)
        cout<<v[i]<<" "<<maxcount<<endl;
    }
 
    return 0;
}