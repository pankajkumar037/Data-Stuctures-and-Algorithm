//find kth smallest element in given arary
#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int arr[]={2,3,13,42,4,6,9,7};
    int k=3;
    int n=8;
    priority_queue<int,vector<int>, greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    int i=1;
    while(i<k){
        pq.pop();
        i++;
    }
    cout<<pq.top()<<endl;
    */

    int arr[]={2,3,13,42,4,6,9,7};
    int k=3;
    int n=8;
   
   priority_queue<int>pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
   
}