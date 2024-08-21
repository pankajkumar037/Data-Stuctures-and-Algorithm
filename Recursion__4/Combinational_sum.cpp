#include<bits/stdc++.h>
using namespace std;
void combsum(int arr[],int n,vector<int>v,int target){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;

    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
        combsum(arr,n,v,target-arr[i]);
        v.pop_back();
    }

}

int main(){
    int arr[]={2,3,6,7};
    int n=4;
    vector<int>v;
    combsum(arr,n,v,7);

}