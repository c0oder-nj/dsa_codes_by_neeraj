#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
        int data = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for data val "<<data<<endl;
    }

    void print(){
        Node* ptr = this;
        do{
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }while(ptr != NULL && ptr != this);
        cout<<endl;
    }
};


// adding Nodes
void insertAtHead(int data,Node* &head,Node* &tail){ 
    // intialize new node 
    Node *temp=  new Node(data);
    temp->next = head;
    if(head == NULL){
        tail = temp;
    }
    head = temp;
    
}



void insertAtTail(int data,Node* &tail){ 
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}




void insertAtPos(int pos,int data,Node* &head,Node* &tail){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }


    if(pos == 1){
        insertAtHead(data,head,tail);
        return;
    }

    int i=1;
    Node *ptr = head;
    while(i<(pos-1) && ptr!=NULL){
        ptr = ptr->next;
        i++;
    }

    // if pos is at last
    // cout<<ptr->data<<endl;
    if(ptr ->next == NULL){
        insertAtTail(data,tail);
        return;
    }


    Node *temp = new Node(data);
    temp->next = ptr->next;
    ptr->next = temp;
}


// floyd cycle detection algo
bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false; 
    }
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL){
        if(fast->next == NULL){
            fast = fast->next;
        }else{
            fast = fast->next->next;
        }
        slow = slow->next;
        if(slow == fast){ // if both pointers met then loop is present 
            return true;
        }
    }
    return false;
} 

// floyd cycle detection algo for getting intersection node
Node* LoopIntersectionNode(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){ // if both pointers met then loop is present 
            return slow;
        }
    }
} 


Node* loopStartNode(Node* intersection,Node* head){
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection ->next;
    }
    return slow;
}



// removingLoop
void removeLoop(Node* head,Node* &intersection){
    Node *ptr = head;
    while(intersection->next != ptr->next){
        intersection = intersection->next;
        ptr = ptr->next;
    }
    intersection->next = NULL;
} 

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(2,head,tail);
    insertAtHead(1,head,tail);
    insertAtTail(3,tail);
    insertAtPos(4,4,head,tail);
    insertAtTail(5,tail);
    insertAtTail(6,tail);
    insertAtTail(7,tail);
    insertAtTail(8,tail);

    // making it circular 
    // tail->next = head; 
    // making it according to my notebook
    tail->next = head->next->next; 
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 3 // 8 points to previous three
    // loop starts from node 3
    head->print();

    // we detected loop successfully
    Node* startloopNode;
    Node* intersectionNode;
    if(floydDetectLoop(head)){
        intersectionNode = LoopIntersectionNode(head);
        startloopNode = loopStartNode(intersectionNode,head);
        cout<<"Loops starts from node with value "<<startloopNode->data<<endl;
    }

    // code for removing loop
    removeLoop(head,intersectionNode);

    // check if loop removed or not
    if(floydDetectLoop(head)){
        cout<<"Present abhi bhi nahi ho skta:)"<<endl;
    }else{
        cout<<"Removed loop successfully"<<endl;
    }


    // get the start NOde of loop
    return 0;
}