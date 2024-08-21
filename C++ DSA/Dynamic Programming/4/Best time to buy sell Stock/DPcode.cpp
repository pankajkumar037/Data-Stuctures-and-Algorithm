#include<bits/stdc++.h>
using namespace std;

int dp[1005][105][2];

class Solution {
   int  f(vector<int>& prices,int i,int k,bool on){
    if(i== prices.size()) return 0;
    
    if(dp[i][k][on] != -1) {
        return dp[i][k][on];
    }

    int ans=INT_MIN;
    // avoid case
    ans=f(prices,i+1,k,on); 
    // not avoid case
    if(on){
        ans=max(ans,prices[i]+f(prices,i+1,k-1,false));
    }else{
        if(k>0){
        ans=max(ans,f(prices,i+1,k-1,true)-prices[i]);
        }
    }
    return dp[i][k][on]=ans;
   }
public:
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return f(prices,0,k,false);
    }
};