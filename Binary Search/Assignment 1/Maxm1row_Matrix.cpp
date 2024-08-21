
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
 
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int target=1;
	    int row=-1;
	    int maxones=-1;
	    
	    for(int i=0;i<n;i++){
	        int count=0;
	        int lo=0;
            int hi=m-1;
            int fidx=-1;
            while (hi>=lo)
            {
                int mid=lo+(hi-lo)/2;
                if(arr[i][mid]==target){
                    if(mid==0){
                        fidx=mid;
                        break;
                        
                    }   
                    
                    else if(arr [i][mid-1 ]!= target){
                       fidx=mid;
                        break;
                    }
                    else hi=mid-1;
                
                }
                else if(arr[i][mid]< 1) lo=mid+1;
                else hi=mid-1;
                
            }
              if(fidx!=-1) count=n-fidx;
	    
        	  if(maxones<count){
        	   maxones=count;
        	   row=i;
        	  }
        
	    }
	    return row;
	   
	}

};

