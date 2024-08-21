#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    vector<int>hp;
 
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
 void push(int element){
        hp.push_back(element);
        upHeapify(hp.size()-1);
 }
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
    if(empty()) return;
    swap(hp[0],hp[hp.size()-1]);
    hp.pop_back();
    downHeapify(0);
 }

};


int main(){

    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

   
    hp.Display();
    cout<<endl;
    



}