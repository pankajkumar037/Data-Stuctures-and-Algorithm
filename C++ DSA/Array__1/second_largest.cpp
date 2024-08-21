// Ek bar aur try karo.. yes done


#include<iostream>
using namespace std;
int main()
{
  
  int arr[4]={1,2,3,4};
    int max=arr[0];
    for(int i=1;i<4;i++){
         if (arr[i]>arr[0]) max=arr[i];

    }
   
    int smax=INT32_MIN;
    for(int i=0;i<4;i++){

    if(arr[i] != max && arr[i]>smax) smax=arr[i];
    
    
    }
    cout<< smax;
    
}
