#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class MaxHeap{
    vector<int>hp;
    int i;// [0,i] tak every element is a max heap
 
    void downHeapify(int pi){
    while(pi<hp.size()){
        int lc=2*pi+1;
        int rc=2*pi+2;
        if(lc>=hp.size()) break; 
        int maxEL=pi;
        if(hp[lc]>hp[maxEL]) {
          maxEL=lc;
        }
        if(rc<hp.size() && hp[rc]>hp[maxEL]){
            maxEL=rc;
        }  
        if(maxEL != pi){
            swap(hp[pi],hp[maxEL]);
            pi=maxEL;
         }
         else{
             break;
        } 
    }
}


 public: 
 // yahan push ki jaroorat nahi hogi kyuki hum sidha vector de rahe hai

 bool empty(){
    if(hp.size()==0) return true;
 }
 void Display(){
    cout<<"[";
    for(int i=0;i<hp.size();i++){
        cout<<hp[i]<<" ";
    }
    cout<<"]";
 }
 int peak(){
    if(hp.size()==0) return INT_MIN;
    else return hp[0];
 }
 void pop(){
    // delete most priority element
    if(hp.size()==0) return;
    swap(hp[0],hp[hp.size()-1]);
    hp.pop_back();
   // downHeapify(0);
 }
 MaxHeap(vector<int> v){
    hp=v;
    int n=hp.size();
    // yaha ulta chalenge n/2 se coz hum jante hai n/2 nodes leaf pe pahle se hoga
    for(int i=n/2;i>=0;i--){
        downHeapify(i);
    }
 }

};


int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    hp.Display();
    cout<<endl;

}