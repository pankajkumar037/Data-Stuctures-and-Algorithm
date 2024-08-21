#include<bits/stdc++.h>
using namespace std;

void allbs(string ans,int n){
    if(ans.length()==n){
        cout<<ans<<" ";
        cout<<endl;
        return;
    }

    allbs(ans+'0',n);
    allbs(ans+'1',n);
    
}

int main(){
    int n;
    cin>>n;
    allbs("",n);
}
