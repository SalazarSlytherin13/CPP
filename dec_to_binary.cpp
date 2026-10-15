#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
      vector<int> item;
      int top;

      Stack(int size){
        item.resize(size);
        top=-1;
      }

      void Push(int x){
        if(top==item.size()){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        else{
            top++;
           item[top]=x;

        }
      }

      int Pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }

        else{
            int x=item[top];
            top--;
            return x;
        }
      }

      int StackTop(int x){
        x=item[top];
        return x;
      }

      bool IsEmpty(){
        if(top==-1){
            return true;
        }

        else{
            return false;
        }
      }

};


int main(){
    int D;
    cout<<"Enter the Decimal Number: ";
    cin>>D;

    if(D==0){
        cout<<"Binary: 0"<<endl;
        return 0;
    }

    if(D<0){
        cout<<"Enter a positive number!"<<endl;
        return 0;
    }

    Stack s(36);

    while(D!=0){
        int r=D%2;
        s.Push(r);
        D=D/2;
    }

    cout<<"Binary: ";

    while(!s.IsEmpty()){
        int x=s.Pop();
        cout<<x;
    }

    return 0;

}