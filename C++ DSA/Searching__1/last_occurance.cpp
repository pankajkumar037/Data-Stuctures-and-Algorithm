#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n=8;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;

    bool flag=false;//check for absentee
    
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1] != target){
                cout<<mid<<endl;
                flag=true;
                break;    
            }
            else{
                lo=mid+1;
            }

        }
        else if(target>arr[mid]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }

    if(flag==false) cout<<"-1"<<endl;


}
