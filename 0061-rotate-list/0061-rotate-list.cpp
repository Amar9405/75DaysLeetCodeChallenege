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
    ListNode* NewLastNode(ListNode* temp ,int k){
        int cnt=1;
        while(temp != NULL){
            if(cnt==k){
                 return temp;
            } 
            temp=temp->next;
            cnt++;
        }
        return  temp;
    };


    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        
        ListNode* tail=head;
        int size=1;
        while(tail->next != NULL  ){
            tail=tail->next;
            size++;
        }


        k= k %  size;

        if(k==0) return head;

        tail->next=head;

        ListNode* newlastnode=NewLastNode(head ,size-k);

        head=newlastnode->next;

        newlastnode->next=NULL;

        return head;

    }
};