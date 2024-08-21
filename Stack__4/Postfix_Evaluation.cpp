#include<bits/stdc++.h>
using namespace std;


int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;

}
int main(){
    string s="79+4*8/3-";
    int n=s.length();

    stack<int>st;
    stack<char>op;

  

    for(int i=0;i<n;i++){
        if( (s[i])>=48 && (s[i])<=57 ){ //yaha kuch ascii val se compare krega
            st.push(s[i]-48);
        }
        else{
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();

            int ans=solve(val1,val2,s[i]);
            st.push(ans);

        }
    }
    // the operator stack have only one values
    cout<<st.top()<<endl;

}