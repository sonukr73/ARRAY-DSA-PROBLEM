#include<iostream>
using namespace std;
long long int sqrtInteger(int n){
    int s=0; 
    int e=n-1;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;

        if(square==n)
        return ans;

        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
    double moreprecision(int n,int precision, int tempsol){
        double factor=1;
        double ans=tempsol;
        for(int i=0;i<precision;i++){
            factor=factor/10;

            for(double j=ans; j*j<n; j=j+factor){
                ans=j;
            
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int tempsol=sqrtInteger(n);
    cout<<"sqt of number is"<<moreprecision(n,3,tempsol)<<endl;
    return 0;
}