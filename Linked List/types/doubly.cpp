#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int val){
            this->data = val;
            this->prev = NULL;
            this->next = NULL;
        }
        
        void print(){
            Node* ptr = this;
            while(ptr!=NULL){
                cout<<ptr->data<<" ";
                ptr = ptr->next;
            }cout<<endl;
        }


        void rPrint(){
            Node *ptr = this;
            while(ptr!=NULL){
                cout<<ptr->data<<" ";
                ptr =  ptr->prev;
            }cout<<endl;
        }

        ~Node(){
            cout<<"I am destructor"<<endl;
            free(this);
        }

        
};

int getLen(Node* head){
    Node *ptr = head;
    int len = 0;
    while(ptr!=NULL){
        len++;
        ptr = ptr->next;
    }
    return len;
}


void insertAtHead(int val,Node* &head,Node* &tail){
    if(head == NULL){
        Node *temp = new Node(val);
        head = temp;
        tail = temp;
        return;
    }else{
        Node* temp  = new Node(val);
        temp->next = head;
        head->prev =temp;
        head = temp;
    }
    
}


void insertAtTail(int data,Node* &tail){
    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPos(int pos,Node* &head,Node* &tail,int data){
    if(pos == 1){
        insertAtHead(data,head,tail);
        return;
    }

    if(pos == (getLen(head) + 1)){
        insertAtTail(data,tail);
        return;
    }
    Node *temp = new Node(data);
    int cnt = 1;
    Node *ptr = head;
    while(cnt<(pos-1) && ptr!=NULL){
        ptr = ptr->next;
        cnt++;
    }
    ptr->next->prev = temp;
    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next = temp;
    return;
}

void deleteAtHead(Node* &head){
    Node *ptr= head;
    head = head->next;
    head->prev = NULL;
    ptr->next = NULL;
    free(ptr);
}

// functions for deletion
void deleteBypos(int pos,Node* &head,Node *&tail){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }else{
        int cnt = 1;
        Node* ptr= head;
        while(cnt<(pos-1) && ptr!=NULL){
            ptr = ptr->next;
            cnt++;
        }
        Node *temp = ptr->next;
        if(temp->next == NULL){
            ptr->next = NULL;
            temp->prev = NULL;
            tail = ptr;
            free(temp);
            return;
        }
        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->prev = NULL;
        temp->next = NULL;
        free(temp);
    }
}


int main(){
    
    // creating node of doubly linked list
    Node *n = new Node(5);
    Node *head = n;
    Node *tail = n;
    // head->print();
    // cout<<"Head val is: "<<head->data<<endl;
    // cout<<"tail val is: "<<tail->data<<endl;
    // cout<<endl<<endl;

    insertAtHead(2,head,tail);
    insertAtHead(4,head,tail);

    // cout<<"Head val is: "<<head->data<<endl;
    // cout<<"tail val is: "<<tail->data<<endl;

    // head->print();
    // tail->rPrint();

    insertAtTail(10,tail);
    insertAtHead(1,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(200,head,tail);

    insertAtTail(225,tail);
    // insertAtPos(3,head,tail,3);
    insertAtPos(1,head,tail,1111);
    int len = getLen(head);
    insertAtPos(len+1,head,tail,9999);
    // insertAtHead(0,head,tail);
    head->print();
    
    cout<<"Head val is: "<<head->data<<endl;
    cout<<"tail val is: "<<tail->data<<endl;


    cout<<endl<<endl<<"After deletion: "<<endl;
    // deleteBypos(1,head,tail); // deleting first node
    // deleteBypos(getLen(head),head,tail); // deleting last node
    deleteBypos(3,head,tail); // deleting in between node
    head->print();
    
    cout<<"Head val is: "<<head->data<<endl;
    cout<<"tail val is: "<<tail->data<<endl;
    // tail->rPrint();
    
    return 0;
}