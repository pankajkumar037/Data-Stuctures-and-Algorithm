#include<iostream>
#include<climits>
using namespace std;
int main(){
  
    int arr[2][3]={2,3,1,4,5,2};
    int brr[3][2]={5,6,7,8,0,4};
   int multi[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
          int sum=0;
        for(int k=0;k<3;k++){
            sum+=arr[i][k]*brr[k][j];
        }
        multi[i][j]=sum;
        }

    }
    
   for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
}