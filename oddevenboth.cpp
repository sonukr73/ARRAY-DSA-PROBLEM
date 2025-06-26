#include<iostream>
using namespace std;
#include<string>
int main(){
    int n;
      string choice;
    cout<<"enter the number:";
    cin>>n;
  
    cout<<" enter your choice";
    cin>>choice;

    for(int i=1;i<=n;i++){
        if(choice=="even"){
        if(i%2==0){
        cout<<i<<" ";
        }
        }
        else if(choice=="odd"){
          if(i%2!=0)
          cout<<i<<" ";
        }
        else{
            cout<<"neither odd nor even";
        }
    }
}