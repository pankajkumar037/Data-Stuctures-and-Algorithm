        // functional code 
#include<iostream>
#include<vector>
using namespace std;

void printf(int idx,vector<int>&ds,int arr[],int n){
    if(idx==n){
        for(auto x:ds){
            cout<<x<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    // take or pick particular sequence
    ds.push_back(arr[idx]);
    printf(idx+1,ds,arr,n);
    ds.pop_back();
    // not pick or take
    printf(idx+1,ds,arr,n);
}

int main(){
 
int arr[]={3,1,2};
int n=3;
vector<int>ds;
printf(0,ds,arr,n);
    
}