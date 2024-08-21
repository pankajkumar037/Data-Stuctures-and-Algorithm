#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s="";
    s=s+val1;
    s=s+val2;
    s.push_back(ch);
    return  s;
}
int main(){
    string s="2+6*4/8-3";
    int n=s.length();

    stack<string>st;
    stack<char>op;

  

    for(int i=0;i<n;i++){
        if( (s[i])>=48 && (s[i])<=57 ){ //yaha kuch ascii val se compare krega
            st.push(to_string(s[i]-48));
        }
        else{//not digit
            
            if(op.size()==0 || priority(s[i])>priority(op.top())){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && priority(op.top())>=priority(s[i])){
                    char ch=op.top();
                    op.pop();
                    string val2=st.top();
                    st.pop();
                    string val1=st.top();
                    st.pop();

                    string ans=solve(val1,val2,ch);
                    st.push(ans);
                }
                op.push(s[i]);
            }
        }

    }
    // the operator stack have values 
    // so make it empty
    while(op.size()>0){
        //kam
            char ch=op.top();
            op.pop();
            string val2=st.top();
            st.pop();
            string val1=st.top();
            st.pop();

            string ans=solve(val1,val2,ch);
            st.push(ans);
    }

    cout<<st.top()<<endl;
   


}