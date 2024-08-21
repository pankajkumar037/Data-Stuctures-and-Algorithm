#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>ok;

    while(st.size()>0){
        cout<<st.top()<<" ";
        ok.push(st.top());
        st.pop();
    }

    // taking back to st
    while(ok.size()>0){
        st.push(ok.top());
        ok.pop();

    }
    cout<<endl<<st.top();

}