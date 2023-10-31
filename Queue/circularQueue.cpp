#include <bits/stdc++.h> 
class CircularQueue{
    int size;
    int *arr;
    int f;
    int r;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        f = r = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // condition to check for queue full
        if(f == 0 && r == size-1){
            return false;
        }
        if(r+1 == f){
            return false;
        }
        else{
            if(f == -1){
                f= 0;
            }
            r = (r+1)%size;
            arr[r] = value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(f == -1){
            return -1;
        }else{
            int ele = arr[f];
            if(f == r){
                // since jo element nikala vo ek single element hoga f == r so queue ko reset kr denge
                f = r = -1;
            }else{
            f = (f+1)%size;
            }
            return ele;
        }
    }
};