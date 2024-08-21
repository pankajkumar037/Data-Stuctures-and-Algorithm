#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // 1,5,3,2,6,4
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<"Maxm is "<<max;
}