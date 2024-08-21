#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>ans;
    void f(int n,int i){
        if(i>n)return;
        if(i<=n && i!=0) {
            ans.push_back(i);
        }
    
        if(i!=0){
            for(int j=0;j<=9;j++){
            f(n,10*i+j);
            }
        }
        else{
            for(int j=1;j<=9;j++){
            f(n,10*i+j);
            }
        }
       
    }

    vector<int> lexicalOrder(int n) {
        ans.clear();
        f(n,0);
        return ans;
    }
};