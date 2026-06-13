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

        // if(head==NULL){
        //     return NULL;
        // }



        // //step 1:- copy the each node of linked list in hashmap;

        //  Node* temp=head;
        //  unordered_map<Node*, Node*> mpp;

        //  while(temp != NULL){
        //     Node* newNode= new Node(temp->val);

        //     mpp[temp]=newNode;

        //     temp=temp->next;
        //  }

        //  //step 2 the Link  the next and random pointer to currect node.

        //  temp=head;

        //  while(temp != NULL){
              
        //      Node* copynode=mpp[temp];

        //     copynode->next=mpp[temp->next];

        //     copynode->random=mpp[temp->random];

        //     temp=temp->next;

        //  }

        //  return mpp[head];


         //most Optimal solutiong
        
        //step 1 :- create copy of the each node and place theat copy in between .
        
        Node* temp=head;
        
        while(temp != NULL){
            Node* copynode=new Node(temp->val);
            copynode->next=temp->next;
            temp->next=copynode;
            temp=temp->next->next;
        }
        
        
        //step2 connect the  random pointer .
        
        temp=head;
        
        while(temp != NULL){
            Node* copynode=temp->next;
            
            
            if(temp->random != NULL){
                 copynode->random=temp->random->next;
            }else{
                copynode->random=NULL;
            }
            
            
            temp=temp->next->next;
            
        }
        
        //step 3 :- connect next pointer.
        
        Node* dummy = new Node(-1);
        Node* res = dummy;
        temp=head;
        
        while(temp != NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        
        return dummy->next;
     
    }
};