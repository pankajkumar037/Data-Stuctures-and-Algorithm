//sort kth sorted array(sort nearly sorted array)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int n=8;
    int k=4;
    priority_queue<int,vector<int>,greater<int>>pq;
    int j=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[j]=pq.top();
            j++;
            pq.pop();
        }
    }

    while(pq.size()>0){
        arr[j]=pq.top();
        pq.pop();
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}