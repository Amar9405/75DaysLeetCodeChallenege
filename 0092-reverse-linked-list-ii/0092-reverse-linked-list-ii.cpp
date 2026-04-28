/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      
       ListNode* nummyNode=new ListNode(-1);
       nummyNode->next=head;

       ListNode* prevNode=nummyNode;
       ListNode* curr=head;

       for(int i=0; i<left-1; i++){
          prevNode=prevNode->next;
          curr=curr->next;
       }

       ListNode* reversest=curr;

       ListNode* prev=NULL;

       for(int i=0; i<=right-left; i++){
           ListNode* next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }

       prevNode->next=prev;
       reversest->next=curr;

       return nummyNode->next;
     
    }
};