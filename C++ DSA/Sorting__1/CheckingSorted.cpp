#include<iostream>
#include<math.h>
using namespace std;

int main(){

int arr[]={1,2,3,4,1};
int n=5;

bool flag=true;
for (int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        flag=false;
        break;
    }
}
if(flag==true) cout<<"sorted";
else cout<< "unsorted";


}