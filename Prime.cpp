#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2; i<=sqrt(n); i++){
        if (i%n==0)
        {
            ans=false;
        }  
    }
    if(ans){
        cout<<"prime hai";
        // break;
    }
    else{
        cout<<"non-prime";
    }
    return 0;    
}