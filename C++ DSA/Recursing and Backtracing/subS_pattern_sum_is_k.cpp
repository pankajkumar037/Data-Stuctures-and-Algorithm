        // functional code 
#include<iostream>
#include<vector>
using namespace std;

void printf(int idx,vector<int>&ds,int arr[],int n,int sum,int s){
    if(idx==n){
        if(s==sum){
        for(auto x:ds){
        cout<<x<<" ";
        }
        cout<<endl;
        } 
        return;
    }
    // take or pick particular sequence
    ds.push_back(arr[idx]);
    s+=arr[idx];
    printf(idx+1,ds,arr,n,sum,s);

    s-=arr[idx];
    ds.pop_back();
    // not pick or take
    printf(idx+1,ds,arr,n,sum,s);
}

int main(){
 
int arr[]={1,2,1};
int n=3;
int sum=2;
vector<int>ds;
printf(0,ds,arr,n,sum,0);
    
}