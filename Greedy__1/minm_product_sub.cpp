#include<bits/stdc++.h>
using namespace std;
int minp(vector<int>& arr,int n){
    priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
    if(pq.top()==0) return 0;
    if(pq.top()>0) return pq.top();
}

int main(){
    vector<int>arr={-5,0,-4,-3};
    int n=4;
    cout<<minp(arr,n);
}