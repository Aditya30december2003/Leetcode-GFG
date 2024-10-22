class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        this->val=x;
        this->next=NULL;
    }
};
class MyLinkedList {
    private:
    Node *head;
    int size;
public:
    MyLinkedList() {
        this->head=NULL;
        this->size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size)return -1;
        Node*temp=head;
        for(int i=0;i<index;i++)
        temp=temp->next;

        return temp->val;
    }
    
    void addAtHead(int val) {
      Node* newhead=new Node(val);
      newhead->next=head;
      head=newhead;
      size+=1;  
    }
    
    void addAtTail(int val) {
        Node* newTail=new Node(val);
        Node* temp=head;
        if(head==NULL)
        head=newTail;
        else{
          while(temp->next){
            temp=temp->next;
        }
        temp->next=newTail;
        }
     size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        if(index>size)return;
        Node* newNode=new Node(val);
        Node* temp=head;
        index--;
        while(index--){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=size)return;
        if(index==0){
            head=head->next;
            size--;
            return;
        }
        Node*temp=head;
        index--;
        while(index--){
            temp=temp->next;
        }
        Node* del=temp->next;
        temp->next=temp->next->next;
        size--;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */