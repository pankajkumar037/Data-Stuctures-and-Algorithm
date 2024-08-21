#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>p;
    p.push(2);
    p.push(9);
    p.push(7);
    p.push(1);
    p.push(6);
    p.push(5);

    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<" ";
}