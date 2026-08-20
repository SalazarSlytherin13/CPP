#include<iostream>
#define SIZE 5
using namespace std;

struct CQueue{
    int item[SIZE];
    int rear;
    int front;
};

CQueue CQ;

bool IsEmpty(){
    if(CQ.rear==CQ.front){
        return true;
    }
    else{
        return false;
    }
}

void EnQueue(int x){
    if((CQ.rear+1)%SIZE==CQ.front){
        cout<<"Queue Overflows";
        exit(1);
    }
    else{
     CQ.rear=(CQ.rear+1)%SIZE;
     CQ.item[CQ.rear]=x;
    }
}

int DeQueue(){
    if(IsEmpty()){
        cout<<"Queue Underflows";
        exit(1);
    }
    else{
        CQ.front=(CQ.front+1)%SIZE;
        int x=CQ.item[CQ.front];
        return x;

    }
}

int main(){
    
}
