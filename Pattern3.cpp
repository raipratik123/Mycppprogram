#include<iostream>
using namespace std;
int main(){
    int n;
     cin>>n;
     int m=(n+1)/2;

     for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            cout<<"*";
        }
        for(int p=1; p<=2*i; p++){
            cout<<" ";
        }
        for(int r=1; r<=m-i; r++){
            cout<<"*";
        }
        cout<<endl;
     }
      for(int i=m-1; i>=1; i--){
        for(int j=1; j<=m-i; j++){
            cout<<"*";
        }
        for(int p=1; p<=2*i; p++){
            cout<<" ";
        }
        for(int r=1; r<=m-i; r++){
            cout<<"*";
        }
        cout<<endl;
     }
     
     
    return 0;

}               