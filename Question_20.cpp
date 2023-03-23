#include<iostream>
using namespace std;
//Circular queue implementation//
#include <bits/stdc++.h> 
class CircularQueue{
    public:
    // Initialize your data structure.
    int rear;
    int front;
    int*array;
    int size;
    CircularQueue(int n){
        // Write your code here.
        rear=front=-1;
        size=10000;
        array=new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if(front==0 && rear==size-1 || rear-front==1){
            return false;
        }
        else if(rear==-1 && front==-1){
            front=rear=0;
            array[rear]=value;
             return true;
        }
        else if(rear==size-1 && front != 0){
            rear=0;
            array[rear]=value;
             return true;
        }
        else{
            array[rear]=value;
            rear++;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(rear=-1 && front= -1 ){
            cout<<"Queue is empty"<<endl;
        }
        else if(rear==0 && front== -1){
            front=0;
            array[front]=-1;
           
        }
        else if(rear !=0 && front=size-1){
            front=0;
              array[front]=-1;
        }
        else{
              array[front]=-1;
            front++;
        }
    }
};