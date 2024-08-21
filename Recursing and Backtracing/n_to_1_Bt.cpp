#include<iostream>
using namespace std;
void name(int i,int val){
    if(i>val) return; 
    name(i+1,val);
    cout<<i<<endl;

}
int main(){
    name(1,4);
}