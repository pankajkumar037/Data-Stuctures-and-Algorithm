#include<bits/stdc++.h>
using namespace std;

void subarray(vector<int>v,int arr[],int n,int idx){

    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    subarray(v,arr,n,idx+1);// ye left vcall humesha lagega
    if(v.size()==0){
        v.push_back(arr[idx]);
        subarray(v,arr,n,idx+1);
        
    }
    else if(arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subarray(v,arr,n,idx+1);
    }

}

int main(){
    int arr[]={1,2,3,4};
    int n=4;

   vector<int>ans;
   subarray(ans,arr,n,0);
}