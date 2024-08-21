#include<bits/stdc++.h>
using namespace std;

void f(int n,int arr[]){
    if(n==1) return;
    f(n-1,arr); 
}

int main(){
    int arr[]={2,4,1,5,3};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    f(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}