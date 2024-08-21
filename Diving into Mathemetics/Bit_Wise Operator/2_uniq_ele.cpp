#include<iostream>
using namespace std;
void uniqe_ele(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    int temp=res;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2 ==0){
           res= res^arr[i];
        }
    }

}

int main(){
    int arr[]={1,2,3,1,5,2};
    int n=6;
    uniqe_ele(arr,n);
}