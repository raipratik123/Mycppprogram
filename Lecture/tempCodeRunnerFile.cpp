#include<iostream>
using namespace std;
// int count(int x){

// }
int main() {
     int x;
	 cin>>x;
     	 int rev=0;
	 while(x!=0){
		 int t=x%10;
		 int a=9-t;
		 if(a<t){
			 rev=rev*10+a;
		 }
		 else{
			 rev=rev*10+t;
		 }
		 x=x/10;
	 }
	 cout<<rev<<endl;
     
	return 0;
}