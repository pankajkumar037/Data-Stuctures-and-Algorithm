#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,4,5,9,15,18,21,24};
int n=9;
int target=21;
//By linear search
for(int i=0;i<n;i++){
    if(arr[i]>target) {
          cout<<"UB is  "<<arr[i]<<endl;
          break ;
    }
}

//By Binary search

    bool  flag=false;
    int lo=0;
    int hi=n-1;
    while(hi>=lo){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]== target){
            flag= true;
            cout<<arr[mid+1];
            break;
         }
        else if (arr[mid]<target) lo=mid+1;
        else(hi=mid-1);

    }

if(flag==false) cout<<arr[lo];




}