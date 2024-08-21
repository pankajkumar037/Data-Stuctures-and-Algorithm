#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,10};
    int n=4;
    // prefix sum
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }

    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"Not split in two array of equal sum ";
    else cout<<"split in two array of equal sum at idx  "<<idx;

}

