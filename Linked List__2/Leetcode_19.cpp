#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=1;
        while(temp->next != NULL){
            count++;
            temp=temp->next;
        }
        
        //yaha count total numof ele return karega..
        int tidx=count-n;

        temp=head;
        for(int i=1;i<tidx;i++){
            temp=temp->next;
        }
        if(count==n){
            return head=head->next;
        }
        else temp->next=temp->next->next;

        return head;
        
    }
};