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
   
     ListNode* midofLinkedlist(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast !=NULL && fast->next != NULL){
           slow=slow->next;
           fast=fast->next->next;
        }
        return slow;
     }


     ListNode*  MergeTwoSortedlist(ListNode* l1,ListNode* l2){
        ListNode* dnode=new ListNode(-1);
        ListNode* temp=dnode;

        while(l1 != NULL && l2 !=  NULL){
            if(l1->val  < l2->val){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
                
            }else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }

        if(l1 == NULL) temp->next=l2;
        if(l2 == NULL) temp->next=l1;

        return dnode->next;
     }


    ListNode* sortList(ListNode* head) {

    // vector<int> arr;
    //     ListNode* temp=head;

    //     while(temp != NULL){
    //         arr.push_back(temp->val);
    //         temp=temp->next;
    //     }

    //     sort(arr.begin(), arr.end());
    //     temp=head;
    //      int i=0;

    //     while(temp != NULL){
    //         temp->val=arr[i];
    //         i=i+1;
    //         temp=temp->next;
    //     }

    // return head;
    
    //base case;
    if(head==NULL || head->next==NULL){
        return head;
    }

    ListNode* middle=midofLinkedlist(head);
    ListNode* right=middle->next;
    middle->next=NULL;
    ListNode* left=head;

    //reservly call the left portion of linked list
    left=sortList(left);
     //reservly call the right portion of linked list
    right=sortList(right);

    return MergeTwoSortedlist(left , right);

    }
};
