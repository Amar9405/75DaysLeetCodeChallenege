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
   
   ListNode* convert(vector<int>& arr){
         
          ListNode* head=new ListNode(arr[0]);
          ListNode* mover=head;

          for(int i=1; i<arr.size();i++){
               ListNode* temp=new ListNode(arr[i]);
               mover->next=temp;
               mover=temp;    
          }
          return head;
   }




    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
      int size=lists.size();
      vector<int> helper;

      for(int i=0; i<size; i++){         
          ListNode* temp=lists[i];

          while(temp != NULL){
             helper.push_back(temp->val);
             temp=temp->next;
          }
      }

      sort(helper.begin(),helper.end());

      if(helper.size()==0) return NULL;

      ListNode* headNode=convert(helper);


      return headNode;
        
       


        
    }
};