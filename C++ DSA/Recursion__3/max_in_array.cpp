#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int n,int i){
    if(i==n) return INT_MIN;

   return max(arr[i],f(arr,n,i+1));

     
}


int main(){
    int arr[]={-1,-6,-3,-90,-65,-3};
    int n=6;
    cout<<f(arr,n,0);
}