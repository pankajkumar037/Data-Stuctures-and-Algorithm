#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,0,1,0,1,1,0};
    int n=8;

    // int cno0=0;
    // int cno1=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) cno0++;
    //     else cno1++;
    // }
    // // printing 0
    //  for(int i=0;i<n;i++){
    //     if(i<cno0) cout<<"0"<<" ";
    //     else  cout<<"1"<<" ";
        
    //  }
   
    // cout<< endl;

    // two pointer approach
    int i=0;
    int j=n-1;
    while(j>i){
        if(arr[i]==0) i++;   
        if(arr[j]==1) j--; 
        if(i>j) break;
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
     
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" "; 
    }
    

}