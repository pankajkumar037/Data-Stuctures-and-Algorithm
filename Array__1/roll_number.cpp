#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        if(arr[i]>35) cout<< i<<" ";

    }
    

}