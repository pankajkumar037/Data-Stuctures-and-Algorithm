#include<iostream>
#include<algorithm>
using namespace std;

int num_of_set_bit(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & n-1);
    }
    return count;
}

int main(){
int n;
cin>>n;
// ye built in function hai
//cout<< __builtin_popcount(n);
cout<<num_of_set_bit(n);

}  


/*
void setbit(int n){
    // decimal to binary conversion
    string binary="";
    while(n>0){
        if(n%2==0){
            binary="0" + binary;
        }
        else{
            binary="1" + binary; 
        }
        n=n>>1;
    }
    cout<<binary<<endl;
    // counting set bit
    int count=0;
    for(int i=0;i<binary.length();i++){
        char ch=binary[i];
        if(ch=='1') count++;
    }
    cout<< count<<endl;

}


int main(){
    int n=5;
    setbit(n);
}
*/