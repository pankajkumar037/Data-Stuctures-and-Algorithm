#include<bits/stdc++.h>
using namespace std;
// class Compare{
//     public:
//     bool operator()(const int &a,const int &b){
//         return a>b;
//     }
// };

// int main(){
//     set<int,Compare>st;
//     st.insert(1);
//     st.insert(5);
//     st.insert(2);
//     for(auto it:st){
//         cout<<it<<" ";
//     }
//     return 0;
// }
student
class Compare{
    public:
    bool operator()(const student &a,const student &b){
        return a>b;
    }
};

int main(){
    set<int,Compare>st;
    st.insert(1);
    st.insert(5);
    st.insert(2);
    for(auto it:st){
        cout<<it<<" ";
    }
    return 0;
}