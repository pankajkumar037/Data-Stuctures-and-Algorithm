// ->Reverse first k element of Queue


#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>st;
    int k=2;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
// 1 2 3 4 5 6
    int n=st.size();
    stack<int>helper;
    for(int i=0;i<k;i++){
        int x=st.front();
        helper.push(x);
        st.pop();
    }
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }

    for(int i=0;i<n-k;i++){
        int x=st.front();
        st.pop();
        st.push(x);
    }



    
    for(int i=0;i<n;i++){
        int x=st.front();
        st.pop();
        cout<<x<<" ";
        st.push(x);
    }

    cout<<endl;
    

}