#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> item;
    int Top;
    
    public:
    // Constructor
    Stack (int s){
        item.resize(s);
        Top=-1;
    }
    // ***************
    int StackTop(){
        int x=item[Top];
        return x;
    }
    // ***************
    int Pop(){
        if(Top==-1){
            cout<<"Stack Underflows"<<"\n";
        }
        int x;
        x=item[Top];
        Top--;
        return x;
    }
    // ***************
    void Push(int x){

        if(Top==item.size()-1){
            cout<<"Stack Overflows"<<"\n";
        }

        Top++;
        item[Top]=x;
    }
    // **************

    bool IsEmpty(){
             if(Top==-1){
                return true;
             }

             else{
                return false;
             }
        }

};

int main(){
    int N;
    Stack s(N);
    cout<<"Enter the number: "<<"\n";
    cin>>N;

    while(N !=0){
        int r=N%2;
        s.Push(r);
        N=N/2;
    }
    
    // while(! IsEmpty(s)){
    //     int x=Pop(s);
    //     cout<<s;
    // }
    // stk.Push(1);
    // stk.Push(2);
    // stk.Push(3);
    // stk.Push(4);
    // stk.Push(5);
    // stk.Push(6);
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
    // cout<<stk.Pop()<<"\n";
   

    

}
