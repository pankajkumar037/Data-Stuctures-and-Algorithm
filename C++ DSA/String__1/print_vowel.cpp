#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="pankaj";
    // finding size
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;

    }
    cout<<"elm is"<<count;

    for(int i=0;i<count;i++){
        if(str[i]=='a') cout<<str[i];
    }


    



}


