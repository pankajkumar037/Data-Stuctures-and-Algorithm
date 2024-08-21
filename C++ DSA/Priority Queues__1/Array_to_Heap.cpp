#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class MaxHeap{
    vector<int>hp;
    int i;// [0,i] tak every element is a max heap
 
 void upHeapify(int ci){
    while(ci>0){
        int pi=(ci-1)/2;
        if(hp[pi]<hp[ci]){
            swap(hp[pi],hp[ci]);
            ci=pi;
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
    for(int i=0;i<hp.size();i++){
        upHeapify(i);
    }
 }

};


int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    hp.Display();
    cout<<endl;

}