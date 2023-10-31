#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    // setting a constructor for initializing linked list node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // default constructor
    Node(){
        this->data = 0;
        this->next = NULL;
    }


    // member functon to print nodes or for traversal
    void print(){
        Node *ptr = this;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }



};

 void insertAtHead(int data,Node* &head){ // why call by reference Since I need to update my original linked list agr pass by value krta toh ek head ki copy banti then us copy me update hota but in this case yaha par jo head hai vo mere actual head ko point kr raha hai jiske aage me insert krana chahata hu
    // intialize new node 
    Node *temp=  new Node(data);
    temp->next = head;
    head = temp;
}



void insertAtTail(int data,Node* &head,Node* &tail){ // tail node points to the last node in my list
    if(tail->next == NULL){
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    else{
    Node *ptr;
    ptr = head;
    while(ptr->next!=NULL){
        // cout<<"Searching End Node... for inserting value "<<data<<endl;
        ptr=ptr->next; // increment ptr until it points to the last node
    }

    Node *temp = new Node(data);
    ptr->next = temp; // since mere last node ka next null hota toh usko new Node kr diya jisse jo naya node banega vo last node hoga 
    tail = temp;
    }
}




void insertAtPos(int pos,int data,Node* &head,Node* &tail){
    // since up position par insert krne ke liye mujhe usse ek pehle wali position par jaana hota why
    // 1 2 10 15 25
    // ab maan lo mujhe third position par insert krna hai toh me 
    // 2 tak jaunga then I will write newNode -> next = 2->next; // newNode will point to 10
    // 2 -> next = newNode // now 2 will point to new Node insted of 10

    // checking for exceptions like
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }


    if(pos == 1){
        insertAtHead(data,head);
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
        insertAtTail(data,head,tail);
        return;
    }


    Node *temp = new Node(data);
    temp->next = ptr->next;
    ptr->next = temp;
}






// function for deletion

// delete starting or head node
void deleteAtHead(Node* &head){
    Node *ptr;
    ptr = head; // ptr points to my starting node and I need to remove this 
    head = head->next; // I update head to point the second node
    ptr->next = NULL; // starting node ka next kr diya null
    free(ptr); // free kr diya starting Node
}




// deletion by position
void deleteByPos(int pos,Node* &head,Node* &tail){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    int pointer = 1;
    Node *ptr = head;
    while(pointer<(pos-1) && ptr!=NULL){
        ptr = ptr->next;
        pointer++;
    }
    Node *temp = ptr->next;
    if(temp->next == NULL){
        tail = ptr;
    }
    ptr->next = temp->next;
    temp->next = NULL;
    free(temp);
}



// deletion by value
void deleteByval(int val,Node* &head,Node* &tail){
    Node* ptr = head;
    if(ptr->data == val){
        deleteAtHead(head);
        return;
    }
    else{
        while(ptr->next->data != val && ptr!=NULL){
            ptr = ptr->next;
        }
        Node *temp = ptr->next;
        if(temp->next == NULL){
            tail = ptr;
        }
        ptr->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
}


void reverseLinkeLIst(Node* &head){
    Node *prev = NULL; // pointer to stroe previous node
    Node *curr = head; // pointer to store current node;
    Node *forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}



int main(){

    // Node * head = new Node(10);
    // Node head(10);

    // cout<<head<<endl; // since head is my pointer so it is holding address of my node If I need value at head so it is holding a class address so I can de-reference the class

    // cout<<(*head).data<<endl;
    // cout<<head->next<<endl;

    // Node * second = new Node(20);
    // head->next = second;

    // head->print(); // print element of my linked list starting from head

    // second->print();



    // checking fucntion
    Node *head = new Node(15);
    insertAtHead(10,head);


    // head->print();
    insertAtHead(2,head);
    // head->print();

    Node *tail;

    insertAtTail(25,head,tail);
    // head->print();
    insertAtTail(35,head,tail);
    // head->print();
    insertAtTail(45,head,tail);

    insertAtHead(1,head);
    // head->print();

    insertAtTail(55,head,tail);

    // insertAtPos(3,3,head);
    // head->print();
    

    // insertAtPos(9,99,head);
    // insertAtPos(1,0,head);
    // head->print();


    // cout<<"Head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    // till now I have 8 elements
    // insertAtPos(9,99,head,tail);
    // cout<<"Before deleting"<<endl;
    // head->print();
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
    // cout<<endl<<endl;

    // cout<<"After Deleting "<<endl;
    // deleteByPos(8,head,tail);
    // deleteByval(1,head,tail);
    // deleteByval(55,head,tail);
    head->print();

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    reverseLinkeLIst(head);
    head->print();
    
    return 0;
}