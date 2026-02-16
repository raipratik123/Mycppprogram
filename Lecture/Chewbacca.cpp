#include<iostream>
using namespace std;
int count(int x){
    int len=0;
    while(x!=0){
    int k=x%10;
    len++;
    x=x/10;
    }
    return len;

}
int reverse(int rev){
    int newrev=0;
    while(rev!=0){
        int k=rev%10;
        newrev=newrev*10+k;
        rev=rev/10;
    }
    return newrev;

}
int main() {//9872
     int x;
	 cin>>x;
    int rev=0;
    int idx=count(x);
	 while(x!=0){
		 int t=x%10;
		 int a=9-t;
         if(idx==1 && a==0){
            rev=rev*10+t;
         }
		 if(a<t){
			 rev=rev*10+a;
		 }
		 else{
			 rev=rev*10+t;
		 }
         idx--;
		 x=x/10;
	 }
     int ans=reverse(rev);
	cout<<ans<<endl;
     
	return 0;
}