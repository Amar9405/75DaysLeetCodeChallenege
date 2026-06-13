/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head==NULL){
            return NULL;
        }



        //step 1:- copy the each node of linked list in hashmap;

         Node* temp=head;
         unordered_map<Node*, Node*> mpp;

         while(temp != NULL){
            Node* newNode= new Node(temp->val);

            mpp[temp]=newNode;

            temp=temp->next;
         }

         //step 2 the Link  the next and random pointer to currect node.

         temp=head;

         while(temp != NULL){
              
             Node* copynode=mpp[temp];

            copynode->next=mpp[temp->next];

            copynode->random=mpp[temp->random];

            temp=temp->next;

         }

         return mpp[head];
     
    }
};