#include<bits/stdc++.h>
using namespace std;


string solve(string  val1,string val2,char ch){
   string s="";
   s+=val1;
   s+=val2;
   s.push_back(ch);
   return s;
}
int main(){
    string s="-/*+79483";
    int n=s.length();

    stack<string>st;
    stack<char>op;

  

    for(int i=n-1;i>=0;i--){
        if( (s[i])>=48 && (s[i])<=57 ){ //yaha kuch ascii val se compare krega
            st.push(to_string(s[i]-48));
        }
        else{
            string val1=st.top();
            st.pop();
            string val2=st.top();
            st.pop();

           string ans=solve(val1,val2,s[i]);
            st.push(ans);

        }
    }
    // the operator stack have only one values
    cout<<st.top()<<endl;

}