#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
  int m=n/2+1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= 2*(m-i); j++) {
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
        cout<<k;
        }
        for(int j=1; j<=2*i-3; j++){
            cout<<" ";
        }
        if(i!=1){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
        }
        cout<<endl;
    }
    for (int i = m-1; i >=1; i--) {
        for (int j = 1; j <= 2*(m-i); j++) {
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
        cout<<k;
        }
        for(int j=1; j<=2*i-3; j++){
            cout<<" ";
        }
        if(i!=1){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}
