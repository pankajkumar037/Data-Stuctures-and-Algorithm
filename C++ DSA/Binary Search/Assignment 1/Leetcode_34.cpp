
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        
        ans[0]=-1;
        ans[1]=-1;
    
        // BS

        // first occurance
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
             if(nums[mid]==target){
                // taki nahi wala execute na ho..
                if(mid==0){
                 ans[0]=mid;
                    break;
                }
                else if(nums[mid-1] != target){
                    ans[0]=mid;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(nums[mid]>target){ 
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }

       
        // last occuranace
         lo=0;
         hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                // taki nahi wala execute na ho..
                if(mid==nums.size()-1){
                    ans[1]=mid;
                    break;
                }
                else if(nums[mid+1] != target){
                    ans[1]=mid;
                    break;
                }
                else{
                   lo=mid+1;
                }
            }
            else if(nums[mid]>target){ 
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }

        return ans;

        
    }
};