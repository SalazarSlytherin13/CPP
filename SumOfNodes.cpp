#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *MakeNode(int x){
    node *p= new node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void CreateTree(node *T){
    int choice;
    cout<<"Whether the left of "<<T->data<<" exists? (1/0)";
    cin>>choice;

    if(choice==1){
        int x;
        cout<<"Enter the data of left node: ";
        cin>>x;
        node *p=MakeNode(x);
        T->left=p;
        CreateTree(p);
    }

    cout<<"Whether the right of "<<T->data<<" exists? (1/0)";
    cin>>choice;

    if(choice==1){
        int y;
        cout<<"Enter the data of right node: ";
        cin>>y;
        node *p=MakeNode(y);
        T->right=p;
        CreateTree(p);
    }

}


int SumNode(node *T){
    if(T==NULL){
        return 0;
    }

    else{
        return T->data+SumNode(T->left)+SumNode(T->right);
    }
}

int main(){
    int x;
    cin>>x;

   node *Root= MakeNode(x);

   CreateTree(Root);

   cout<<SumNode(Root);

}
