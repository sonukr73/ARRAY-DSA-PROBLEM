#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks of students";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
     for(int i=0;i<n;i++){
      if(marks[i]<35){
        cout<<"roll number whose are fail in exam:-" <<i<<endl;
    }
    else{
       cout<<"roll number whose are pass in exam:-" <<i<<endl;
    }

    }
}