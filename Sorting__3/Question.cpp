// Q. Given array ke element ko index se replace jaise smallest ko 0
// aur highest ko n-1  usi order me
//  example :(19,12,23,8,16)->(3,1,4,0,2)
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

//Brut Force method
/*
int main(){
  int arr[]={19,12,23,8,16};
  int n=5;
//copy
  int brr[n];
  for(int i=0;i<n;i++){
    brr[i]=arr[i];
  }

 for(int i=0;i<n;i++){
    cout<<brr[i] << " ";
  }

  cout<< endl;

// sort brr
bool flag=true;

for(int i=0;i<n;i++){
   for(int j=0;j<n-1;j++){
    if(brr[j]>brr[j+1]){
        swap(brr[j],brr[j+1]);
        flag=false;
    }
   }
   if (flag== true){
    break;
   }
}
 for(int i=0;i<n;i++){
    cout<<brr[i] << " ";
  }

  cout<<endl;

  // giving index
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if (arr[i]==brr[j]) arr[i]=j;
  }
 }
 for(int i=0;i<n;i++){
    cout<<arr[i] << " ";
  }

  cout<<endl;
  }
*/

//          Efficient Method
int main(){
  int arr[]={19,12,23,8,16};
  int n=5;
  int brr[n]={0,0,0,0,0};
  int x=0;

  for(int i=0;i<n;i++){
    int min=INT32_MAX;
    int mindex=-1;
    for(int j=0;j<n;j++){
      if(brr[j]==1) continue;
      else{
         if(min>arr[j]){
          min=arr[j];
          mindex=j;
         }
      }
    }
    arr[mindex]=x;
    brr[mindex]=1;
    x++;
  }


for(int i=0;i<n;i++){
  cout<< arr[i]<<" ";
}




}


