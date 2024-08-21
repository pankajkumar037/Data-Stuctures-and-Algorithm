#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    

};

class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void Insert_At_Tail(int val){    //TC->O(1)
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void Insert_At_Head(int val){    //TC->O(1)
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void Insert_At_idx(int idx,int val){    
        Node* t=new Node(val);
        Node* temp=head;
        if(idx<0 || idx>size) cout<<"invalid insertion";
        else if(idx==0) Insert_At_Head(val);
        else if(idx==size) Insert_At_Tail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next= temp->next;
            temp->next=t;
            t->prev=temp; //for dll
            t->next->prev=t;// for dll
            size++;

        }  
    }

    //Deletion
    void Delete_At_Head(){
        if(size==0){
            cout<<"invalid";
            return;
        }
        head=head->next;
        if(head !=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void Delete_At_Tail(){
        if(size==0){
            cout<<"invalid";
            return;
        }
        if (size==1){
            Delete_At_Head();
            return;
        }
        if(size>1){
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
        }
        size--;
    }
    void Delete_At_Any_Idx(int idx){
       if(idx<0 || idx>=size) {
        cout<<"invalid";
        return;
       }
       if(idx==0) Delete_At_Head();
       else if(idx==size-1) Delete_At_Tail();
       else{
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        size--;
       }
        
    }

    //getting element at idx
    int Get_Ele_At_idx(int idx){   // T.c-> O(n)
        if(idx<0 || idx>=size){
            cout<<" invalid";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
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
 DLL list;
 list.Insert_At_Tail(10);
 list.Insert_At_Tail(20);
 list.Insert_At_Tail(30);
 list.Insert_At_Tail(40);
 list.Insert_At_Tail(50);

 list.display();

 list.display();
 cout<<list.size;
 cout<<endl;
cout<<list.Get_Ele_At_idx(2);

   

}