#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // finding pivot element
        int n=nums.size();
        int pvidx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pvidx=i;
                break;
            }
        }
        // case for agar koi pivot nahi hai
        if(pvidx==-1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        // sorting / reverse after pivot
        reverse(nums.begin()+pvidx+1,nums.end());
        

        // finding just greater element than idx
        int ngeIdx=-1;
        for(int i=pvidx+1;i<n;i++){
            if(nums[i]>nums[pvidx]) {
                ngeIdx=i;
                break;
            }
            
        }
        // swappping idx and its next greater element
        swap(nums[pvidx],nums[ngeIdx]);
    }
};