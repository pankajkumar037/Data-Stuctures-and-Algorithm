#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,4,5,9,15,18};
    int n=7;
    int target=5;

    bool flag =false;
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=(hi+lo)/2 ;
        if(arr[mid]==target) {
            flag= true;
            break;
        }

        else if(arr[mid]<target) lo=mid+1;
        else if (hi=mid-1);

    }
    if(flag==true) cout<<" present";
     else cout<<"Nope";



}