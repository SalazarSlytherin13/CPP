#include<iostream>
#include<vector>
#include<algorithm>
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

bool Prcd(char a, char b){
        if(a=='^'|| a=='*'|| a=='/'|| a=='%'){
            if(b=='^'){
                return false;
            }

            else{
                return true;
            }
        }

        if(a=='+'|| a=='-'){
            if(b=='+'|| b=='-'){
                return true;
            }

            else{
                return false;
            }
        }
    }
  

void infixToPrefix (string infix){
   Stack S(20);
   int i=0;
   string prefix;

   while(i<prefix.size()){
    char symbol = infix[i];
    i++;
    
    if(symbol >='a' && symbol <='z' || symbol >='A' && symbol <='Z' || symbol >='0' && symbol <='9')

   }
}