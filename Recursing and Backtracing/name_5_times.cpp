#include<iostream>
using namespace std;
void name(int i,int val){
    if(i>val) return;
    cout<<"names"<<endl;
        i++;
    name(i,val);

}
int main(){
    name(1,5);
}