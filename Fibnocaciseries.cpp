#include<iostream>
using namespace std;
int fibbo(int n){
    if(n==0 || n==1)
    return n;
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n; 
    cin>>n;j
    int g=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(g)<<" ";
            g++;
        }
        cout<<endl;

    }
    return 0;
}
