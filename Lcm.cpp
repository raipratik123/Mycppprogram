#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b%a==0){
        return a; 
    }
     gcd(b%a,a);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c=gcd(a,b);
    int lcm=a*b/c;
    cout<<lcm;
    return 0;
}