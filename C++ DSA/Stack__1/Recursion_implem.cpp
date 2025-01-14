#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void displayrev(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}

void PushAtBottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }

    int x=st.top();
    st.pop();
    PushAtBottom(st,val);
    st.push(x);
}
int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    PushAtBottom(st,100);
    display(st);
}