#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        // previous greter element in one pass
        int pge[n];
        pge[0]=-1;
        int max=height[0];
        for(int i=1;i<n-1;i++){
            pge[i]=max;
            if(max<height[i]) max=height[i];
        }

         // next greter element in one pass
        int nge[n];
        nge[n-1]=-1;
        int max=height[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i]=max;
            if(max<height[i]) max=height[i];
        }
        //minimun of two
        int mini[n];
        for(int i=0;i<n;i++){
             mini[i]=min(pge[i],nge[i]);
        }
        // water calculation
        int water=0;
        for(int i=1;i<n;i++){
            if(height[i]<mini[i]){
                water+=mini[i]-height[i];
            }
        }
        return water;
    }
};

