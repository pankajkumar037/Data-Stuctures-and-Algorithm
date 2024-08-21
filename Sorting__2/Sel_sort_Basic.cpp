#include<iostream>
#include<climits> 
#include<cmath>
using namespace std;
int main(){

    int arr[]={4,1,9,6,7};
    int n=5;
    for(int ele: arr ){
        cout<< ele<<" ";
    }
    cout<< endl;
    // selection sort
        
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindex=-1;
     for(int j=i;j<n;j++)
     {
        if(arr[j]<min)
         {
            min =arr[j];
            mindex=j; // hum index ke sath swap karenge
         }

     }
      swap(arr[i],arr[mindex]);
    }

  for(int ele: arr ){
        cout<< ele<<" ";
    }

}
