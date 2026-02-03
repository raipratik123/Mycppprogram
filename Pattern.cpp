#include<iostream>
using namespace std;

int main(){
  int n=8;
  for(int i=1; i<n; i++){
    if(i<=n/2){
        for(int j=n/2; j>i; j--){
            cout<<" ";
        }
    }
    else if(i>n/2){
        for(int j=1; j<=(i-n/2); j++){
            cout<<" ";
        }
    }
    cout<<"*";
    if(i<=n/2){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
    }
    else if(i>n/2){
        for(int j=n/2; j>=(i-n/2); j--){
            cout<<" ";
        }
    }
    cout<<"*";
    cout<<endl;
  }
    return 0;
}