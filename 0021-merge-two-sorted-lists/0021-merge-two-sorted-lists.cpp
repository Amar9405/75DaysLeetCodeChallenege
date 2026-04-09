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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;

        ListNode* temp=list1;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

       ListNode* temp2=list2;

        while(temp2 != NULL){
             arr.push_back(temp2->val);
             temp2=temp2->next;
        }

        sort(arr.begin(),arr.end());

        if(arr.size()==0) return NULL;


        ListNode* head=new ListNode(arr[0]);
        ListNode* mover=head;

        for(int i=1; i<arr.size(); i++){
            ListNode* temp=new ListNode(arr[i]);
            mover->next=temp;
            mover=temp;
        }
       


        return head;


    }
};