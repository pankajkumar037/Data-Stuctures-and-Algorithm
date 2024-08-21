#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(2);
    pq.push(9);
    pq.push(7);
    pq.push(-35);
    pq.push(6);
    pq.push(5);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<" ";
}