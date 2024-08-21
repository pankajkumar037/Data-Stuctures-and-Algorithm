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

    int minr=0;
    int minc=0;
    int maxr=3;
    int maxc=3;

    while(minr<=maxr && minc<=maxc){
        // right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;

        // down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
       
        //left
       
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;

        //up

        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;

    }

    

}