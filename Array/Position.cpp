#include<iostream>
using namespace std;
int main(){
    int arr[]={12,30,40,50,60};
   bool found = false;
   int target;
   cin>>target;
for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    if(arr[i]==target){
        cout << i+1;
        found = true;
        break;
    }
}

if(!found){
    cout << "not found";
}

    
    return 0;
}   