// functional
/* two variable pass
#include<iostream>
using namespace std;

void reverse(int arr[],int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse(arr,i+1,j-1);
   

}
int main(){
  int arr[]={1,2,3,4};
  int n=4;
    reverse(arr,0,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/
#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    if(n<0) return;
    cout<<arr[n]<<" ";
    reverse(arr,n-1);
   
}
int main(){
  int arr[]={1,2,3,4};
  int n=4;
    reverse(arr,3);
}
