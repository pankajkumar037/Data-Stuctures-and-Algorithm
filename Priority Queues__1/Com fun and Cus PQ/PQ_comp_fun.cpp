#include<bits/stdc++.h>
using namespace std;
// for min heap
class comp{
    public:
    bool operator()(const int &a,const int &b){
            return a>b;
    }

};

int main(){
    priority_queue<int,vector<int>,comp>pq;
    pq.push(1);
    pq.push(9);
    pq.push(3);
    pq.push(6);
    while (!(pq.empty()))
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    
}