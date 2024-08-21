#include<bits/stdc++.h>
using namespace std;

void gp(string ans,int n,int op,int co){
    if(co==n){
        cout<<ans<<endl;
        return;
    }

    if(op<n){
        gp(ans+'(',n,op+1,co);
    }
    
    if(ans.size()>0 && co<op){
        gp(ans+')',n,op,co+1);
    }
    

}

int main(){
    int n;
    cin>>n;
    gp("",n,0,0);
}