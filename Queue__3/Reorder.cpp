
#include<bits/stdc++.h>
using namespace std;

int  main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    int n=q.size();

    stack<int>st;

    while(q.size()>n/2){
        st.push(q.front());
        q.pop();
    }
    //4321
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //56784321
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    //43215678
    while(q.size()>n/2){
        st.push(q.front());
        q.pop();
    }
    //s 1234
    //q 5678
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }


}