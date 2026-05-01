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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        vector<ListNode*> ans;

        ListNode* temp=head;
        int size=0;

        while(temp != NULL){
            size++;
            temp=temp->next;    
        }
        
        //how many element in each parts
        int elementeachPart=size/k;
        int remaining=size%k;


        temp=head;
        for(int i=0; i<k; i++){
            
             if(temp==NULL){
                 ans.push_back(NULL);   // add empty parts
                 continue;
              }


            ListNode* prev=NULL;
            ListNode* HeadNode=temp;
            int len=0;
            while(temp != NULL && len < elementeachPart){
                prev=temp;
                temp=temp->next;
                len++;
            }

            if(remaining > 0){
                prev=temp;
                temp=temp->next;
                remaining--;
            }

            prev->next=NULL;
            ans.push_back(HeadNode);
        }     
        
     return ans;  

    } 
        
    
};