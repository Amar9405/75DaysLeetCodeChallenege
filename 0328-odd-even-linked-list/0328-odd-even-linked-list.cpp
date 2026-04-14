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
    ListNode* oddEvenList(ListNode* head) {

        // if(head == NULL ||  head->next == NULL) return head;
        
        
        //  vector<int> arr;
        //  ListNode* temp=head;
        
        // //odd place element put in array
        //  while(temp != NULL && temp->next != NULL){
        //     arr.push_back(temp->val);
        //     temp=temp->next->next;
        //  }

        // if(temp != NULL) arr.push_back(temp->val);

        //  temp=head->next;
        //  //even place element put in array
        //  while(temp != NULL && temp->next != NULL ){
        //     arr.push_back(temp->val);
        //     temp=temp->next->next;
        //  }

        //  if(temp != NULL)  arr.push_back(temp->val);

        //  temp=head;
        //  int i=0;

        //  while(temp != NULL ){
        //     temp->val=arr[i];
        //     i++;
        //     temp=temp->next;
        //  }

        //  return head;  time complexity=O(2n) space complexity:-O(n)


    if(head==NULL || head->next==NULL)  return head;
    
    ListNode* Odd=head;
    ListNode* even=head->next;
    ListNode* evenhead=head->next;

    while(even != NULL && even->next != NULL){
        Odd->next=Odd->next->next;
        even->next=even->next->next;

        Odd=Odd->next;
        even=even->next;
    }

    Odd->next=evenhead;

    return head;
        

        
    }
};