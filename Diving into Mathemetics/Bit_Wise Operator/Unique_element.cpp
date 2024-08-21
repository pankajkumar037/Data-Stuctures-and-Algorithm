#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,7,8,2,8,7,9,6};
    int n=9;
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }
    cout<<res;
}