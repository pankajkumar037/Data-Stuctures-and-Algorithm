//pichla wala code pura permutation de rha tha hume usme se bas ek chahiye
#include<bits/stdc++.h>
using namespace std;
void combsum(int arr[],int n,vector<int>v,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;

    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combsum(arr,n,v,target-arr[i],i);// yahan i ka matlab hai ki iske picche ka call nhii lagega taki reeatation naho
        v.pop_back();
    }

}

int main(){
    int arr[]={2,3,6,7};
    int n=4;
    vector<int>v;
    combsum(arr,n,v,7,0);

}