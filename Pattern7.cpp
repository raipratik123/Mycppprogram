#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a=1;
    for(int i=1; i<=n; i++){
        for(int p=1; p<=n-i; p++){
            cout<<" \t";
        }
           for(int k=i; k<=2*i-1; k++){
            cout<<k<<" \t ";
        }
         for(int k=2*i-2; k>=i; k--){
            cout<<k<<"  \t";
         }
         cout<<endl;
        }
    return 0;
}