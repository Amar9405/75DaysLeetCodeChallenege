/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:  
//    ListNode* collisionPoint(ListNode* temp1 ,ListNode* temp2,int d){   
//        while(d){
//          d--;
//          temp2=temp2->next;
//        }

//        while(temp1 != temp2){
//          temp1=temp1->next;
//          temp2=temp2->next;
//        }
//      return temp1;
//    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // ListNode* temp=headA;
        // map<ListNode*, int> mpp;

        // while(temp != NULL){
        //     mpp[temp]=1;
        //     temp=temp->next;
        // }
        // temp=headB;
        // while(temp != NULL){
        //     if(mpp.find(temp) != mpp.end()){
        //         return temp;
        //     }
        //     temp=temp->next;
        // }
        // return NULL;

        // ListNode* t1=headA;
        // int L1=0;
        
        // while(t1 != NULL){
        //     L1++;
        //     t1=t1->next;
        // }

        // ListNode* t2=headB;
        // int L2=0;

        // while(t2 != NULL){
        //    L2++;
        //    t2=t2->next; 
        // }

        // if(L1 < L2){
        //     return collisionPoint(headA,headB,L2-L1);
        // }else{
        //     return collisionPoint(headB,headA,L1-L2);
        // }

        //optimal apporoach

        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1 != t2){
            t1=t1->next;
            t2=t2->next;
           //this condition for only if both linked list is independent then t1 and t2 is point NULL;
            if(t1 == t2)  return t1;

            if(t1==NULL){
                t1=headB;
            }
            if(t2==NULL){
                t2=headA;
            }
        }
        return t1;

        
    }
};