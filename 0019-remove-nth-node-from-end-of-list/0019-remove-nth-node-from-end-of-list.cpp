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

  
    ListNode*  ReverseLL(ListNode* head){
           ListNode*  temp=head;
           ListNode* prev=NULL;

            while(temp != NULL){
                 ListNode* front = temp->next;
                temp->next = prev;
                prev = temp;
                temp = front;
            }
            return prev;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {

       if(head==NULL ){
           return NULL;
       }


       ListNode* NewHeadReverseLL=ReverseLL(head);

       int size=0;

       ListNode*  temp=NewHeadReverseLL;
       ListNode*  prev=NULL;

       while(temp != NULL){
          size++;
          if(size==n){
             if(prev==NULL){
                  NewHeadReverseLL=temp->next;
             }else{
                prev->next=temp->next;
             }
             delete temp;
             break;

          }
          prev=temp;
          temp=temp->next;
       }

       return  ReverseLL(NewHeadReverseLL);

    }
};