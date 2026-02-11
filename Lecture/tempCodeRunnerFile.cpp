#include<isotream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int len=0;
    int temp=n;
    while(temp!=0){
        temp=temp/10;
        len++;
    }
     temp=n;
     int sum=0;
    while(temp!=0){
        int k=twmp%10;
        sum=sum+pow(k,l);
        temp=temp/10;
    }
    if(sum==n){
      cout<<"amstrong";
    }
    else{
        cout<<"not";
    }


    return 0;

}