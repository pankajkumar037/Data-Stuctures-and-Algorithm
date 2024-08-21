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
    void Insert_At_End(int val){    //TC->O(1)
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
     void Insert_At_idx(int idx,int val){    
        Node* t=new Node(val);
        Node* temp=head;
        if(idx<0 || idx>size) cout<<"invalid insertion";
        else if(idx==0) Insert_At_Begin(val);
        else if(idx==size) Insert_At_End(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next= temp->next;
            temp->next=t;

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
    ll.Insert_At_idx(2,100);
     ll.display();
}