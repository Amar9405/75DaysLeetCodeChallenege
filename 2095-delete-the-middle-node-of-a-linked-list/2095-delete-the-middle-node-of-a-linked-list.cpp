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
    ListNode* deleteMiddle(ListNode* head) {
        
    //     if(head==NULL || head->next==NULL){
    //         return NULL;
    //     }

    //     if(head->next->next==NULL){
    //         head->next=NULL;
    //         return head;
    //     }
        
    //     ListNode* temp=head;
    //     int cnt=0;
    //     while(temp != NULL){
    //         cnt++;
    //         temp=temp->next;
    //     }

    //     int NodetoDelete=(cnt/2);

    //     temp=head;
    //     ListNode* prev=head;
        
    //     cnt=-1;


    //     while(temp != NULL){
    //         cnt++;
    //         if(cnt==NodetoDelete){
    //            prev->next=temp->next;
    //            temp->next=NULL;
    //            delete temp;
    //            break;
    //         }
    //         prev=temp;
    //         temp=temp->next;
    //     }

    //   return head;

    if(head==NULL || head->next==NULL){
        return NULL;
    }

    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* prev=NULL;

    while( fast !=NULL && fast->next !=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;


    }
};