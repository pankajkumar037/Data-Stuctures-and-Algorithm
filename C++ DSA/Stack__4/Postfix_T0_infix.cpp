#include<bits/stdc++.h>
using namespace std;


string solve(string val1,string val2,char ch){
   string s="";
   s+=val1;
   s.push_back(ch);
   s+=val2;
   return s;

}
int main(){
    string s="79+4*8/3-";
    int n=s.length();

    stack<string>st;
    stack<char>op;

  

    for(int i=0;i<n;i++){
        if( (s[i])>=48 && (s[i])<=57 ){ //yaha kuch ascii val se compare krega
            st.push(to_string(s[i]-48));
        }
        else{
            string val2=st.top();
            st.pop();
            string val1=st.top();
            st.pop();

            string ans=solve(val1,val2,s[i]);
            st.push(ans);

        }
    }
    // the operator stack have only one values
    cout<<st.top()<<endl;

}