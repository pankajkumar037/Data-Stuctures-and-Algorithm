#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
        // iska result nahi aarha hai Leetcode pe ek bar phir dekho
class Solution {
public:
    vector<vector<int> >dp;
    int f(int n, int k, int t){
         if(n==0 && t==0) return 1;
        if(n==0) return 0;
        if(dp[n][t]!=-1) return dp[n][t];
        int result=0;
       
        for(int j=1;j<=k;j++){
            if(t-j<n) continue;
            result=((result % mod)+(f(n-1,k,t-j) % mod)) % mod;
        }
        
        return dp[n][t]=result % mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(35,vector<int> (1005,-1));
       return f(n,k,target);
    }
};