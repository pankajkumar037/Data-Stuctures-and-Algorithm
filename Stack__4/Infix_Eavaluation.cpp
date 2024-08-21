#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;

}
int main(){
    string s="7+1*4/8-2";
    int n=s.length();

    stack<int>st;
    stack<char>op;

  

    for(int i=0;i<n;i++){
        if( (s[i])>=48 && (s[i])<=57 ){ //yaha kuch ascii val se compare krega
            st.push(s[i]-48);
        }
        else{//not digit
            
            if(op.size()==0 || priority(s[i])>priority(op.top())){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && priority(op.top())>=priority(s[i])){
                    char ch=op.top();
                    op.pop();
                    int val2=st.top();
                    st.pop();
                    int val1=st.top();
                    st.pop();

                    int ans=solve(val1,val2,ch);
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
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();

            int ans=solve(val1,val2,ch);
            st.push(ans);
    }

    cout<<st.top()<<endl;
    cout<<7+1*4/8-2<<endl;


}