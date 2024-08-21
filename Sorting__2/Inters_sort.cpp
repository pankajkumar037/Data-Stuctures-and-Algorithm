#include<iostream>
#include<climits> 
#include<cmath>
using namespace std;
int main(){

    int arr[]={4,1,9,6,7};
    int n=5;
    for(int ele: arr ){
        cout<< ele<<" ";
    }
    cout<< endl;

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && (arr[j] < arr[j-1])){
            swap(arr[j-1],arr[j]);
            j--;

        }

    }
 for(int ele: arr ){
        cout<< ele<<" ";
    }
    cout<< endl;

}
