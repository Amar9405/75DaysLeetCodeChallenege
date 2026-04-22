/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // unordered_map<ListNode* ,int> mpp;
    //     ListNode* temp=head;

    //     while(temp  != NULL){
    //         if(mpp.find(temp) != mpp.end()){
    //             return temp;
    //         }
    //         mpp[temp]=1;
    //         temp=temp->next;
    //     }   
    //   return NULL;

    ListNode* fast=head;
    ListNode* slow=head;

    while(fast != NULL && fast->next != NULL){
          slow=slow->next;
          fast=fast->next->next;

          if(slow==fast){
             fast=head;
             while(fast != slow){
                slow=slow->next;
                fast=fast->next;   
           }    
           return fast;
         }
     }

     return NULL;
    

    }
};