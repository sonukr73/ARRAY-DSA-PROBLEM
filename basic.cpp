#include<iostream>
using namespace std;
void printARRAY(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
    //declear
   // int first[2];
    //intialize
    //int second[15]={1,2,3,4};
   // cout<<"ky haal bhai"<<endl;
    //accessing
    int third[12]={2,3,4,5,6,7,6,6,7,8};
    // array with function
    printARRAY(third,12);
    int fourth[10]={0};

    printARRAY(fourth,10);
    // size calculate
  int fourthsize=sizeof(fourth)/sizeof(fourth[0]);
cout<<fourthsize<<endl;
char ch[4]={'a','b','c','d'};
cout<<ch[3]<<endl;
for(int i=0;i<4;i++){
    cout<<ch[i]<<endl;
}
    
}