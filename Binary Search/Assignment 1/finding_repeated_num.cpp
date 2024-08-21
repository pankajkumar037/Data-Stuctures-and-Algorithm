#include <bits/stdc++.h>
using namespace std;

// yaha repeated elemen find karna hai
int main(){
    int arr[]={1,2,2,3,4,5};
    int n=6;

    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==arr[mid]){
            if(arr[mid]==arr[mid-1]){
                cout<< mid<<endl;
                break;
            }
            else hi=mid-1;
        }
        else if(mid+1==arr[mid]){
            lo=mid+1;
        }
        
    }

}