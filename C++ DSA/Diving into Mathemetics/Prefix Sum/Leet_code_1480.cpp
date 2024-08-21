// Q. running sum of array

#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={1,4,5,3,2,7,6};
int n=7;
for(int i=1;i<n;i++){
    arr[i]=arr[i]+arr[i-1];
}

for(int i=0;i<n;i++){
   cout<< arr[i]<<" ";
}

    
}