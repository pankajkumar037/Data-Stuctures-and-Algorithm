// CSES  Problrm set removing digits

#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<ll>dp(1000006,-1);

ll f(int n){
    dp[0]=1;
    
    for(int k=1;k<=n;k++){
    ll count=0;
    for(int i=1;i<=6;i++){
        if(k-i<0) break;// yahan break isliye kyuki pahela i is condition ko satisfy nhi kiya to baki bhi nahi kareaga..
        count=(count%mod + dp[k-i]   %  mod)%mod;
    }
     dp[k]=  count%mod;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}