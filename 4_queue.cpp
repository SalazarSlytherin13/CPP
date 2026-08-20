#include<iostream>
using namespace std;

struct Queue{
    int data;
    struct node* next;
};

node *front, *rear;

node *GetNode(){
    node *p;
    p=new node;
    return p;
}

void EnQueue(int x){
    node *temp;
    
}