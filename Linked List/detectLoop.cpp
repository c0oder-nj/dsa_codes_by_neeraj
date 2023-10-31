#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        this->data = val;
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
        Node* ptr = this->next;
        do{
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }while(ptr != this->next);
        cout<<endl;
    }
};


void insertNode(int element,int data,Node* &tail){
    if(tail == NULL){ // list is empty
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp; // for making it circular list // next me start ka address daal diya
        return;
    }
    else{
        // the list is not empty
        // assuming that the element after which we want to insert is present in the list
        Node *ptr = tail;
        while(ptr->data != element){
            ptr = ptr->next;
        }
        Node *temp = new Node(data);
        temp->next = ptr->next;
        ptr->next = temp;
        if(ptr == tail){
            tail = temp;
        }
    }
}


void deleteByval(int val, Node* &tail){
    // when deleting the first node
    Node* ptr = tail;
    while(ptr->next->data != val){
        ptr = ptr->next;
    }
    Node *temp = ptr->next;
    ptr->next = temp->next;
    temp->next = NULL;
    if(temp == tail){
        tail = ptr;
    }
    delete temp;
}


bool detectLoop(Node* head){
    Node *ptr = head;
    unordered_map<Node*,bool> visited;
    while(ptr!=NULL){
        if(visited[ptr]){
            return true;
        }else{
            visited[ptr] = true;
            ptr = ptr->next;
        }
    }
    return false;
}

bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false; 
    }
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){ // if both pointers met then loop is present 
            return true;
        }
    }
    return false;
}
int main(){

    Node *tail = NULL;
    insertNode(1,1,tail);
    // tail->print();
    insertNode(1,2,tail);

    // insertNode(1,15,tail);
    insertNode(2,3,tail);
    insertNode(3,4,tail);
    // tail->print();

    // deleteByval(4,tail); // deleting tail
    // deleteByval(1,tail); // deleting first node
    // deleteByval(2,tail);
    insertNode(4,5,tail);
    tail->print();

    // cout<<"head is "<<tail->next->data<<endl;
    // cout<<"Tail is "<<tail->data<<endl;


    // if(detectLoop(tail->next)){
    //     cout<<"LOop is present "<<endl;
    // }else{
    //     cout<<"No loop is present"<<endl;
    // }

    if(floydDetectLoop(tail->next)){
        cout<<"Loop is present "<<endl;
    }else{
        cout<<"No loop is present"<<endl;
    }

    
    return 0;
}