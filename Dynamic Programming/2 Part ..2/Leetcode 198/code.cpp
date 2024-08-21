#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
     vector<int>dp;
    int f(vector<int>& m,int i){
        if(i>=m.size()) return 0;
        return max(m[i]+f(m,i+2),0+f(m,i+1));
    }

    int fTB(vector<int>& m,int i){
        if(i>=m.size()) return 0;
        if(dp[i] != -1) return dp[i];
        dp[i]=max(m[i]+fTB(m,i+2),0+fTB(m,i+1));
        return dp[i];
    }

    int fBU(vector<int>& m){
        int n=m.size();
        if(n==1) return m[0];
        dp.clear();
        dp.resize(n);
        // base case
        dp[n-1]=m[n-1];
        dp[n-2]=max(m[n-1],m[n-2]);
        for(int i=n-3;i>=0;i--){
            dp[i]=max(m[i]+dp[i+2],0+dp[i+1]);
        }
        return dp[0];
    }


    int rob(vector<int>& nums) {
       
       return fBU(nums);
    }
};