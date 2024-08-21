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
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"sum is "<<sum;
}