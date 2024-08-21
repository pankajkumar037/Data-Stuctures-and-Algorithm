#include<iostream>
using namespace std;
int main()
{
    
int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
int n=13;
int target=5;
bool flag=false;
int lo=0;
int hi=n-1;
while (hi>=lo)
{
    int mid=lo+(hi-lo)/2;
    if(arr[mid]== target){
        flag=true;
        if(arr [mid-1 ]!= target){
                cout<< "1 st occurance at index"<<mid;
                break;
        }
        else hi=mid-1;
    
    }
    else if(arr[mid]< target) lo=mid+1;
    else hi=mid-1;


}
if(flag==false) cout<< "not oresent okk ";


}