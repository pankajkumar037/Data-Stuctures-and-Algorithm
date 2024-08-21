//        Majority Element



#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
/*

    ye chal jayega but time limit exceeded and some case 
int main(){

 int arr[]={2,1,4,5,2,2,2};
 int n=7;
 
    for(int i=0;i<n;i++){
     int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    if(count>n/2) cout<<arr[i];
           
    }

}
*/

// sel,int,bubb tino sort ka time complexity On2 hai but hum built in sort
// ka use kar sakte hai LEEtCODE pe 

// sort karne ke bad jo meedle element pe hoga usi ko return karega...

/*                  LeetCode
    sort(v.begin(),v.end()); // TC =nlogn
    return arr[n/2];

    ek time complexity On me hai (Voting algorithm)
*/

int main(){
  int arr[]={1,5,1,7,2,1,1,1,6};
  int n=9;

  //sort insertin      //TC O(n2)
  for(int i=0;i<n;i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
  }
 cout<<"Majority element is "<<arr[n/2];

}


