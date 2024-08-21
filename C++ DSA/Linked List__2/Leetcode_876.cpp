#include<bits/stdc++.h>
using namespace std;

/* -> Ye ek brut force solution hai do pass ka <-
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=1;
        while(temp->next != NULL){
            count++;
            temp=temp->next;
        }
        count=count/2;

        temp=head;

        for(int i=1;i<=count;i++){
            temp=temp->next;
        }
        return temp;
        
    }
};
*/


  struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;   
    }
};