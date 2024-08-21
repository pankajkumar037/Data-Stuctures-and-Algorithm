#include<iostream>
#include<climits>
using namespace std;
int main(){
  
    int arr[2][3]={2,3,1,4,5,2};
    int brr[2][3]={5,6,7,8,9,4};
    int sum[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    
   for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}