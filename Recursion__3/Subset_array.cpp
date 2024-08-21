#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int idx,int n,vector<int> ans){ //yaha and namhi denge kyuki har bar hume naya vector bnanna hai
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    subset(arr,idx+1,n,ans);// yahan ans me call le time push nahi kar sakte
    ans.push_back(arr[idx]);
    subset(arr,idx+1,n,ans);

}


int main(){
   int arr[]={1,2,3};
   int n=3;
   vector<int>ans;
   subset(arr,0,n,ans);
}