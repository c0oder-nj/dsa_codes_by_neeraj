#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        // pointers required for stack operation
        Stack* top;
        int size;

        // pointers required for one node
        int data;
        Stack* next;
    
    public:
        Stack(){
            this->top = NULL;
            size = 0;
        }

        Stack(int val){
            this->top = NULL;
            this->data = val;
            this->next = NULL;
        }

        ~Stack(){
            Stack *ptr = this->top;
            while(ptr!=NULL){
                Stack* temp = ptr;
                delete temp;
                ptr = ptr->next;
            }
        }

        void push(int val){
                Stack *temp = new Stack(val);
                temp->next = top;
                top = temp;
                size++;
        }

        void pop(){
            if(this->top == NULL){
                cout<<"Stack underflow"<<endl;
            }else{
                size--;
                Stack* temp = top;
                top = top->next;
                temp->next = NULL;
                delete temp;
            }
        }

        int peek(){
            if(this->top == NULL){
                cout<<"NO elemene to show";
                return -1;
            }
            return this->top->data;
        }

        int getSize(){
            return this->size;
        }


};

int main(){

    Stack *s = new Stack;
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);

    cout<<s->peek()<<endl;
    s->pop();
    cout<<s->peek()<<endl;
    cout<<s->getSize();
    
    return 0;
}