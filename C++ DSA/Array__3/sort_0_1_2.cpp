#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
           // Mehtod..1
        int n=nums.size();
        int co0=0;
        int co1=0;
        int co2=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) co0++;
            if(nums[i]==1) co1++;
            if(nums[i]==2) co2++;
        }
        for(int i=0;i<n;i++){
            if(i<co0) nums[i]=0;
            else if(i<co1+co0) nums[i]=1;
            else nums[i]=2;
           
        }
    }
};