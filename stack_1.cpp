#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
      vector<char> item;
      int top;

      Stack(int size){
        item.resize(size);
        top=-1;
      }

      void Push(char x){
        if(top==item.size()-1){
            cout<<"Stack Overflow";
            return;
        }

        else{
            top++;
            item[top]=x;
        }
      }

      char Pop(){
        if(top==-1){
            cout<<"Stack Underflow";
            return '\0';
        }

        else{
            char x=item[top];
            top--;
            return x;
        }
      }


       char StackTop(){
           char x=item[top];
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
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    Stack stk(n);

    stk.Push('A');
    stk.Push('B');
    stk.Push('C');
    stk.Push('D');
   cout<<stk.Pop()<<endl;
   cout<<stk.StackTop()<<endl;
   cout<<stk.Pop()<<endl;
    stk.Push('E');
    
    



}