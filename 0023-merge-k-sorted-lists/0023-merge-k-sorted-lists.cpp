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
   
//    ListNode* convert(vector<int>& arr){
         
//           ListNode* head=new ListNode(arr[0]);
//           ListNode* mover=head;

//           for(int i=1; i<arr.size();i++){
//                ListNode* temp=new ListNode(arr[i]);
//                mover->next=temp;
//                mover=temp;    
//           }
//           return head;
//    }

   ListNode* Merge2Lists(ListNode* l1, ListNode* l2){
       ListNode* dummyNode=new ListNode(-1);
       ListNode* mover=dummyNode;
       ListNode* t1=l1;
       ListNode* t2=l2;


       while(t1 != NULL && t2 != NULL){
           if(t1->val < t2->val){
              mover->next=t1;
              t1=t1->next;
              mover=mover->next;
           }else{//t2->val < t1->val;
              mover->next=t2;
              t2=t2->next;
              mover=mover->next;
           }
       }
    
       if(t1==NULL) mover->next=t2;
       if(t2==NULL) mover->next=t1;

       return dummyNode->next;

   }




    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
    //   int size=lists.size();
    //   vector<int> helper;

    //   for(int i=0; i<size; i++){         
    //       ListNode* temp=lists[i];

    //       while(temp != NULL){
    //          helper.push_back(temp->val);
    //          temp=temp->next;
    //       }
    //   }

    //   sort(helper.begin(),helper.end());

    //   if(helper.size()==0) return NULL;

    //   ListNode* headNode=convert(helper);


    //   return headNode;

    if(lists.size()==0) return NULL;

    ListNode* LinkList1=lists[0];

    for(int i=1; i<lists.size();i++){
        ListNode* LinkList2=lists[i];
        LinkList1=Merge2Lists(LinkList1,LinkList2);
     }

        return LinkList1;   
    }
};