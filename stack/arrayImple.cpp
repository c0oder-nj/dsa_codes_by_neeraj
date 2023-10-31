#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        // properties
        int top;
        int size;
        int *arr;

        public:
        // behavious function
        Stack(int size){
            this->top = -1;
            this->size = size;
            this->arr = new int[this->size];
        }

        ~Stack(){
            delete arr;
            cout<<"Stack allocated array memory is free Now"<<endl;
        }

        // method to check if stack is full or not
        bool isFull(Stack* s){
            if(s->top == (s->size)-1){
                return true;
            }return false;
        }

        // method to check if stack is empty or not
        bool isEmpty(Stack *s){
            if(s->top == -1){
                return true;
            }return false;
        }


        // push method
        void push(int data){
            // push kab krunga jab khali hoga tabhi krunga
            if(!isFull(this)){
                this->top++;
                this->arr[top] = data;
            }else{
                cout<<"Stack overflow .. not inserted "<<endl;
            }
        }

        void pop(){
            // pop tabhi krunga jab stack me kuchh hoga 
            if(!isEmpty(this)){
                arr[top] = INT_MIN;
                top--;
            }else{
                cout<<"Stack underflwo ... not popped"<<endl;
            }
        }

        int topVal(){
            if(top>=0)
                return this->arr[top];
            else{
                cout<<"Stack is empty"<<endl;
                return -1;
            }   
        }
};

int main(){
    Stack* s = new Stack(5);
    // cout<<s->isEmpty(s)<<endl; return 1 since begining My stack is empty
    s->push(10);
    s->push(20);
    cout<<s->topVal()<<endl;
    s->pop();
    cout<<s->topVal()<<endl;

    delete s;
    return 0;
}