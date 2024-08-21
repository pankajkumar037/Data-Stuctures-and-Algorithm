#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    // val pass
   Node a(10);
   Node b(20); 
   Node c(30);
   Node d(40);

    // forming
   a.next=&b;
   b.next=&c;
   c.next=&d;

  // cout<<((a.next)->next)->val;
//   Node temp=a;
//   while(temp.next != NULL){
//     cout<<temp.val<<" ";
//     temp=*(temp.next); //ye pale b ka add tha pointer lagane ke bad b
//   }
  // ye wala code pura LL print nahi karega dry rum for this

  
    Node temp=a;
    while(1){
    cout<<temp.val<<" ";
    if(temp.next == NULL) break;
    temp=*(temp.next); 
  }
}