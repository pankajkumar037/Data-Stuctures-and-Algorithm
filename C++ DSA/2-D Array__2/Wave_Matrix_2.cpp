#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    // reversing column..
    for(int k=0;k<4;k++){
        int i=0;
        int j=4-1;
        while(i<=j){
         swap(arr[i][k],arr[j][k]);
         i++;
         j--;
        }
    }
   // required pattern

    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

 
}

