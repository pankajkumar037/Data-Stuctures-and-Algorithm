#include<iostream>
#include<algorithm>
using namespace std;

int Max_power_2(int n){
    int temp;
    while(n!=0){
        temp=n;
        n=(n & (n-1));
    }
    return temp;
}


int main(){
int n;
cin>>n;
// ye built in function hai
//cout<< __builtin_popcount(n);
cout<<Max_power_2(n);

}     

// second method
