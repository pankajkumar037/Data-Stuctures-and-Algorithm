#include<bits/stdc++.h>
using namespace std;
int main(){  
    queue<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
   // 1 2 3 4 5 6
   stack<int>stk;
   while(st.size()>0){
    stk.push(st.front());
    st.pop();
   }

   while(stk.size()>0){
    st.push(stk.top());
    stk.pop();
   }


    int n=st.size();
    for(int i=0;i<n;i++){
        int x=st.front();
        st.pop();
        cout<<x<<" ";
        st.push(x);
    }

    cout<<endl;
    

}