#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int>st;
    stack<int>hp;  
    MyQueue() {
         
    }
    
    void push(int x) {
        while(st.size()>0){
            int x=st.top();
            st.pop();
            hp.push(x);
        }
        hp.push(x);
        while(hp.size()>0){
            int x=hp.top();
            hp.pop();
            st.push(x);
        }
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return  true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */