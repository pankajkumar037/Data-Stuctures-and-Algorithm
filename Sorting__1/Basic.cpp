
//   Most Otimised Bubble Sort

#include<iostream>
#include<math.h>
using namespace std;

int main(){

int arr[]={9,3,4,5,2};
int n=5;
// display
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

bool flag=true;

for(int i=0;i<n;i++){
   for(int j=0;j<n-1;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag=false;
    }
   }
   if (flag== true){
    break;
   }
}
// display
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


}