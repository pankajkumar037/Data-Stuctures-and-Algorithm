#include<iostream>
using namespace std;

int mp(int r,int c,int tr,int tc){
    if(r==tr && c==tc)  return 1;
    if(c>tc ||r>tr) return 0;

    return mp(r,c+1,tr,tc)+mp(r+1,c,tr,tc);
}
void printpath(int r,int c,int tr,int tc,string s){
    if(r==tr && c==tc){
        cout<<s<<endl;
        return;
    }
    if(c>tc ||r>tr ) return;

    printpath(r,c+1,tr,tc,s+'R');//right path
    printpath(r+1,c,tr,tc,s+'D');//left path
}


int main(){
    
    int arr[3][3];
    cout<<mp(0,0,2,2);
    cout<<endl;
    printpath(0,0,2,2,"");
}