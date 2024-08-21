#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[],int idx,int n,vector<int> ans,int k){ //yaha and namhi denge kyuki har bar hume naya vector bnanna hai
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            }
            cout<<endl;
           
        }
        return;
    }

    subsequence(arr,idx+1,n,ans,k);// yahan ans me call le time push nahi kar sakte
    ans.push_back(arr[idx]);
    subsequence(arr,idx+1,n,ans,k);

}


int main(){
   
    int arr[]={1,2,3,4,5};
    vector<int>v;
    subsequence(arr,0,5,v,3);
}