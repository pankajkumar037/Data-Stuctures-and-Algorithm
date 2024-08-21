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
void display_rec(Node* head){
   if(head==NULL) return;
   cout<<head->val<<" ";
   display_rec(head->next);
}

void display_rec_rev(Node* head){
   if(head==NULL) return;
   display_rec_rev(head->next);
   cout<<head->val<<" ";
}

int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    // display
   display_rec(a);
   cout<<endl;
   display_rec_rev(a);

  
}