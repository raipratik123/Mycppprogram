#include<iostream>
using namespace std;
int main() {
	int n; 
	cin>>n;
	int m=n/2+1;
	int a=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j=m-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=2*i-2; j++){
			cout<<a++<<" ";
		}
        for(int k=i-1; k>=1; k--){
           
        } 
		cout<<endl;
	}
	return 0;
}