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
    void Insert_At_idx(int idx,int val){    // T.c-> O(n)
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
    int Get_Ele_At_idx(int idx){   // T.c-> O(n)
        if(idx<0 || idx>=size){
            cout<<" invalid";
            return -1;
        }
        else{
            Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void Delete_At_Head(){
        if(size==0) cout<<"invalid";
        if (size>=1) head=head->next;
        size--;
    }
    void Delete_At_Tail(){
        if(size==0) cout<<"invalid";
        if (size==1) head=head->next;
        if(size>1){
            Node* temp=head;
            for(int i=0;i<size-2;i++){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
        }
        size--;
    }
    void Delete_At_Any_Idx(int idx){
        if(idx<0 || idx>=size) cout<<"invalid";
       if(idx==0) Delete_At_Head();
       else if(idx==size-1) Delete_At_Tail();
       else{
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
       }
        size--;
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
    cout<<ll.Get_Ele_At_idx(4);
    cout<<endl;
    ll.Delete_At_Any_Idx(3);
    ll.display();
  

}