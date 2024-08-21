#include<bits/stdc++.h>
using namespace std;


void QuickSort(int arr[],int n){
  int i=0;
  while (i<n){
   int realidx=arr[i]-1;
   if(i== realidx) i++;
   else{
    swap(arr[i],arr[realidx]);
   }
  }
  
}

int main(){
    int arr[]={2,4,3,5,1,6};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    QuickSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}