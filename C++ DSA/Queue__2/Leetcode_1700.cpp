
#include<bits/stdc++.h>
using namespace std;

// 100% faster solution ..

// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         int n=sandwiches.size();

//         int i=0;//for sandwixh
//         int j=0;// for student
//         int c=0;
//         while(i<n && j<5*n){
//             if(sandwiches[i]==students[j]){
//                 i++;
//                 j++;
//             }
//             else{
//                 int x=students[j];
//                 j++;
//                 c++
//                 students.push_back(x);
//             }
//         }
//         return n-i;    
//     }
// };