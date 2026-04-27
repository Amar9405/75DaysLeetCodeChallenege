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
  
    ListNode* middleofLL(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* Reverse(ListNode* head){
         ListNode* temp=head;
         ListNode* prev=NULL;

         while(temp != NULL){
             ListNode*  next=temp->next;
             temp->next=prev;
             prev=temp;
             temp=next;
         }
         return prev;
    }

   
    int pairSum(ListNode* head) {
        // vector<int> arr;

        // ListNode* temp=head;

        // while(temp != NULL){
        //     arr.push_back(temp->val);
        //     temp=temp->next;
        // }

        // int i=0;
        // int j=arr.size()-1;
        // int maxi=INT_MIN;

        // while(i < j){
        //      int sum=arr[i]+arr[j];
        //      maxi=max(maxi,sum);
        //      i++;
        //      j--;
        // }

        // return maxi; Time complexity :- O(n)+O(n/2) space complexity=O(n);

        ListNode* middleNodeLL=middleofLL(head);
        ListNode* newReverse=Reverse(middleNodeLL);

        ListNode* t1=head;
        ListNode* t2=newReverse;
        int maxi=INT_MIN;
        while(t2 != NULL){
            int sum=(t1->val+t2->val);
            maxi=max(maxi,sum);

            t1=t1->next;
            t2=t2->next;
        }

        return maxi;


   
    }
};