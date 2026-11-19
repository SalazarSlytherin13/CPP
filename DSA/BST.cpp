#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* MakeNode(int x){
    node *P= new node;
    P->data=x;
    P->left=NULL;
    P->right=NULL;
    return P;
}

node* BSTInsert(node* T, int x){
    node* R=MakeNode(x);
    node* P=T;
    node* Q=NULL;

    if(T==NULL){
        T=R;
        return T;
    }
    
    else{
        while(P!=NULL){
        Q=P;

        if(x < P->data){
           P=P->left;
        }

        else{
            P=P->right;
        }
    }

    if(x < Q->data){
        Q->left=R;
    }

    else{
        Q->right=R;
    }
 }
    return T;
}


node* BSTMinimum(node* T){
    while(T->left!=NULL){
        T=T->left;
    }

    return T;
}


node* BSTMaximum(node* T){
    while(T->right!=NULL){
        T=T->right;
    }

    return T;
}


node* BSTSearch(node* T, int x){
    while(T!=NULL){
        if(T->data==x){
            return T;
        }

        else{
            if(x < T->data){
                T=T->left;
            }

            else{
                T=T->right;
            }
        }
    }

    return NULL;
}


int main(){
    node* R=NULL;
    R=BSTInsert(R,5);
    R=BSTInsert(R,4);
    R=BSTInsert(R,8);
    R=BSTInsert(R,1);
    R=BSTInsert(R,9);
    R=BSTInsert(R,7);
    R=BSTInsert(R,6);
    R=BSTInsert(R,2);
    R=BSTInsert(R,12);
    R=BSTInsert(R,11);
    R=BSTInsert(R,10);
    R=BSTInsert(R,3);

    cout<<"Minimum: "<<BSTMinimum(R)<<endl;
    cout<<"Maximum: "<<BSTMaximum(R)<<endl;

}