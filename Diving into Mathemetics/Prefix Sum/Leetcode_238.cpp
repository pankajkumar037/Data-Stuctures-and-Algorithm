//Q. Product of array except self
// [1,2,3,4] -> [24,12,8,6]

#include<iostream>
using namespace std;
// brut force

int main(){

    /*
    int arr[]={1,2,3,4};
    int n=4;
    int pdct=1;
    for(int i=0;i<n;i++){
    if(arr[i]==0) continue;
    pdct=pdct*arr[i];
    }
    cout<< pdct<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]==0) arr[i]=pdct;
        else arr[i]=pdct/arr[i];
    }

// display
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    cout <<endl;


*/

// using prefix sum
 

 int arr[]={1,2,3,4};
  int n=4;


// prefix product
 int pp[n];

     pp[0]=1;
    int p=arr[0];
    for(int i=1;i<n;i++){
    pp[i]=p;
    p=p*arr[i];
    }

// suffix product
int sp[n];

sp[n-1]=1;
 p=arr[n-1];
for(int i=n-2;i>=0;i--){
    sp[i]=p;
    p*=arr[i];
}

int ans[n];
for(int i=0;i<n;i++){
    ans[i]=pp[i]*sp[i];
}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}




}

