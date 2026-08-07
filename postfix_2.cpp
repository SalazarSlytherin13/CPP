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

}