class MyLinkedList {

private:
  struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;     
    }
  };

    Node* head;
    int size;

public:

    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {

        if(index < 0 || index >=size ) return -1;

        int cnt=0;
        Node* curr=head;
        while(curr != NULL ){
            if(index==cnt){
                break;
            }
            cnt++;
            curr=curr->next;
        }
        return curr->data;
    }
   
    void addAtHead(int val) {
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        size++;
      
    }
    
    void addAtTail(int val) {

        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;

        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;
            for(int i = 0; i < index - 1; i++){
                temp = temp->next;
            }

            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }
        size--;

    }
};