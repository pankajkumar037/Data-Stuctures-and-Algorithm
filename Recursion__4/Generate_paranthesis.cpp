#include<bits/stdc++.h>
using namespace std;

bool validp(string s){
    stack<int>st;
    int i=0;
    while(i<s.length()){
        if(st.size()==0|| (s[i]=='(') ){
          st.push(s[i]);
        }
        else if((s[i]==')' && st.top()=='(')){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
       
        i++;
    }
    if(st.size()==0) return true;
    else return false;

}

void gp(string ans,int n){
    if(ans.length()==n){
        if(validp(ans)==true){
            cout<<ans<<endl;
        }
        return;
    }

    
    gp(ans+'(',n);
   
    if(ans.size()>0){
        gp(ans+')',n);
    }
    

}

int main(){
    int n;
    cin>>n;
    gp("",2*n);
}