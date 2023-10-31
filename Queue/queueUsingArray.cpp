#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        size = 10000001;
        arr = new int[size];
        qfront = rear = 0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){ // check for isFull-
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear){
            return -1;
        }else{
            int val = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return val;
        }

    }

    int front() {
        // Implement the front() function
        if(qfront == rear){
            return -1;
        }
        return arr[qfront];
    }
};