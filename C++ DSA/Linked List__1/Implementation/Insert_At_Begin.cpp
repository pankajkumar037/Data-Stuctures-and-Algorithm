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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void Insert_At_Begin(int val){    //TC->O(1)
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    LinkedList ll;
     cout<< ll.size<<endl;
    ll.Insert_At_Begin(40);
    ll.Insert_At_Begin(30);
    ll.Insert_At_Begin(20);
    ll.Insert_At_Begin(10);
    ll.display();
    cout<< ll.size<<endl;
}