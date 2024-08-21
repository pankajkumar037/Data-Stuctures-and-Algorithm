// CSES  Problrm set removing digits

#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<ll>dp(1000006,-1);

ll f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    ll count=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;// yahan break isliye kyuki pahela i is condition ko satisfy nhi kiya to baki bhi nahi kareaga..
        count=(count%mod + f(n-i)   %  mod)%mod;
    }
    return dp[n]=   count%mod;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}