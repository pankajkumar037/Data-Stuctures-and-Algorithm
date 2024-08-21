#include<bits/stdc++.h>
using namespace std;

void display(list<int>&lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int>list1;
    //list<int>list2(7);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    list<int>list2(3); // yaha hum list ko khud value de rahe hai
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=4;
    iter++;
    *iter=5;
    display(list2);

    list1.pop_back(); // for removing from back
    list1.pop_front();// for removing from back
    display(list1);
    // list1.remove(1);
    // display(list1);// for removing any element from list./
    list1.sort(); // for sorting of list
    display(list1);
    list1.merge(list2);// merging of two list
    display(list1);

}