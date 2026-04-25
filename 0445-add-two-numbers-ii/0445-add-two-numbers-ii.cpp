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
    ListNode *ReverseLL(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;

        while(temp != NULL){
            ListNode* newNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=newNode;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHeadl1=ReverseLL(l1);
        ListNode* newHeadl2=ReverseLL(l2);

        ListNode* t1=newHeadl1;
        ListNode* t2=newHeadl2;
        ListNode* nummyNode= new ListNode(-1);
        ListNode* temp=nummyNode;
        int carry=0;

        while(t1 != NULL || t2 !=  NULL){
           
            int sum=carry;

            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;

            ListNode* newNode= new ListNode(sum%10);
            carry=sum/10;

            temp->next=newNode;
            temp=temp->next;

            if(t1) t1=t1->next;
            if(t2) t2=t2->next;

        }

        if(carry){
             ListNode* newNode= new ListNode(carry);
             temp->next=newNode;
             temp=newNode;
        }

        ListNode* result=nummyNode->next;
        delete nummyNode;
        return ReverseLL(result);
   
    }
};