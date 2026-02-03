#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        if(i<=n){
            for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i; k++){
            cout<<"*";
        }
        }
        if(i>n){
            for(int j=1; j<2*j-1; j++){
                cout<<" ";
            }
            for(int k=1; k<n-1; k++){
             cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}