#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    
     int arr[]={2,6,0,1,0,0,8,4};
     int n=8;
     // aim 2 6 1 8 4 0 0 0

     bool flag=true;
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==0) swap(arr[j],arr[j+1]);
            flag=false;
        }
        if(flag== true) break;
     }
     for(int i=0;i<n;i++ ){
        cout<< arr[i]<<" ";
     }


}
