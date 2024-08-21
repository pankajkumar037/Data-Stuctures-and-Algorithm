#include<iostream>
using namespace std;
void name(int i,int val){
    if(val<i) return;
    cout<<val<<endl;
        
    name(i,val-1);

}
int main(){
    name(1,4);
}