#include<iostream>
#include<vector>
using namespace std;

class CQueue{
    vector<int> item;
    int rear;
    int front;
    public: 
       CQueue(int SIZE){
         item.resize(SIZE);
         rear=front=SIZE-1;
       }

    bool IsEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }

    void EnCQueue(int x){
        int m=item.size();
        if((rear+1)%m==front){
            cout<<"Queue Overflows";
            exit(1);
        }

        else{
            rear=(rear+1)%m;
            item[rear]=x;
        }
    }

    int DECQueue(){
        if(rear-front+1==0){
            cout<<"Queue Underflows";
            exit(1);
        }
        else{
            int m=item.size();
            front=(front+1)%m;
            int x=item[front];
            return x;
        }
        
    }
      
};

int main(){
    CQueue CQ(5);
    CQ.EnCQueue(1);
    CQ.EnCQueue(2);
    CQ.EnCQueue(3);
    cout<<CQ.DECQueue()<<"\n";
    cout<<CQ.DECQueue()<<"\n";
    CQ.EnCQueue(4);
    CQ.EnCQueue(5);
    CQ.EnCQueue(6);
    cout<<CQ.DECQueue()<<"\n";


}