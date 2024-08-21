#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={0,0,0,1,1,1};
    int n=6;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target=1;
   

    bool flag=false;//check for absentee
    
    int lo=0;
    int hi=n-1;
    int fidx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1] != target){
                fidx=mid;
                flag=true;
                break;    
            }
            else{
                hi=mid-1;
            }

        }
        else if(target>arr[mid]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }

    
    if(flag==false) cout<<"0"<<endl;
    else{
     cout<<n-fidx<<endl;
    }


}
