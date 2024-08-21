#include<bits/stdc++.h>
using namespace std;
#define ll long long



class Solution {
   int  f(vector<int>& prices,int i,int k,bool on){
    if(i== prices.size()) return 0;
    
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
    return ans;
   }
public:
    int maxProfit(int k, vector<int>& prices) {
        return f(prices,0,k,false);
    }
};