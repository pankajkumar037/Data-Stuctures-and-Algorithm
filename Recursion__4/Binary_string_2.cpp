#include<bits/stdc++.h>
using namespace std;

void allbs(string ans,int n){
    if(ans.length()==n){
        cout<<ans<<" ";
        cout<<endl;
        return;
    }

    allbs(ans+'0',n);
    if(ans.length()==0){
        allbs(ans+'1',n);
    }
    else if(ans[ans.length()-1]!='1'){
        allbs(ans+'1',n);
    }
    
}

int main(){
    int n;
    cin>>n;
    allbs("",n);
}