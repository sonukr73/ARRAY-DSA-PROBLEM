#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
    int n = height.size();

// prev greatest element array

int prev [n];

prev [0] = -1;

int max = height [0];

for(int i=1;i<n;i++){

prev [i] = max;

if (max<height[i]) max = height[i];

}

// next greatest element array -> prev as

prev [n-1] = -1;

max = height[n-1];

for(int i=n-2;i>=0;i--) {

if(max<prev [i]) prev [i] = max;

if(max<height[i]) max = height [i];

}

// calculating water

int water =0;
for(int i=1;i<n-1;i++){

if(height[i]<prev[i]){

water += (prev[i]-height[i]);

}
}
return water;
}
    


int main(){
   vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<" ";
    cout<<endl;
    //int arr2[6]={2,3,6,7,10,12};
    //int arr3[10]={};
    
    int water =trap(arr2);
   cout<<water;
cout<<endl;

}