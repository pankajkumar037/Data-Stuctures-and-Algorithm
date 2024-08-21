#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int x;
cin>>x;
int arr[8]={1,3,2,4,3,4,1,6};

for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==x){
            cout<<i <<" "<<j <<endl;
        }
        
    }
}

}