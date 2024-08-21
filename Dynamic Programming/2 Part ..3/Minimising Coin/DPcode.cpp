// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;
vector<int>coin;
vector<int>dp;
int f(int n){
if(n==0) return 0;
if(dp[n]!=-2) return dp[n];//imp
int m=INT_MAX;
for(int i=0;i<coin.size();i++){
    if(n-coin[i]<0) continue;
   m= min(m,f(n-coin[i]));
}
if(m==INT_MAX) return INT_MAX; // imp
return dp[n]=1+m;
}

int main(){
    int n,m;
    cin>>n>>m;
    coin.clear();
    dp.clear();
    dp.resize(1000006,-2); // coz hume  yahan retrurn nhi karna hai
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        coin.push_back(y);
    }
    int x=f(m);
    if(x==INT_MAX) cout<<"-1\n";
    else cout<<x<<"\n";
}