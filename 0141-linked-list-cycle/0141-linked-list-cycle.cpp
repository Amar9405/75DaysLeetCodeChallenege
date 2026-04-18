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
    bool hasCycle(ListNode *head) {
        // map<ListNode* ,int> mpp;

        // ListNode* temp=head;

        // while(temp != NULL){
        //     if(mpp.find(temp) != mpp.end()){
        //         return true;
        //     }
        //     mpp[temp]=1;
        //     temp=temp->next;
        // }

        // return false;  Time complexity :- O(n)+O(log n )//for map and loop

        //space complexity :- O(n) we store the number of element in map DS

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }

        return false;


    }
};