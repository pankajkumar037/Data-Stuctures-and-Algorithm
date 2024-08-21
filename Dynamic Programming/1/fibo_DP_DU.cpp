#include<bits/stdc++.h>
using namespace std;

vector<int>dp;
int FiboBU(int n){
    dp.clear();
    dp.resize(n+1);
    dp[0]=0;
    dp[1]=1;
    for (int i=2;i<=n;i++){
        dp[i]= dp[i-1] +dp[i-2];
    }
    return dp[n];
    
}



int main(){
    int n;
    cin>>n;
    
    cout<<FiboBU(n)<<"\n";
}