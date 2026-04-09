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
    //     vector<int> arr;

    //     ListNode* temp=list1;

    //     while(temp != NULL){
    //         arr.push_back(temp->val);
    //         temp=temp->next;
    //     }

    //    ListNode* temp2=list2;

    //     while(temp2 != NULL){
    //          arr.push_back(temp2->val);
    //          temp2=temp2->next;
    //     }

    //     sort(arr.begin(),arr.end());

    //     if(arr.size()==0) return NULL;


    //     ListNode* head=new ListNode(arr[0]);
    //     ListNode* mover=head;

    //     for(int i=1; i<arr.size(); i++){
    //         ListNode* temp=new ListNode(arr[i]);
    //         mover->next=temp;
    //         mover=temp;
    //     }
    //     return head;
    ListNode* t1=list1;
    ListNode* t2=list2;

    ListNode* dnode=new ListNode(-1);
    ListNode* temp=dnode;
    

    while(t1 != NULL && t2 != NULL){
         if(t1->val < t2->val){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
         }else{// t2->val < t1->val
            temp->next=t2;
            temp=t2;
            t2=t2->next;
         }
    }

    if(t1==NULL) temp->next=t2;
    if(t2==NULL) temp->next=t1;

    

    
    return dnode->next;


    }
};