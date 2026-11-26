#include<iostream>
using namespace std;

struct node{
    struct node *next[26];
    int we;

};

node *MakeNode(){
    node *p;
    p=new node;

    for(int i=0;i<26;i++){
        p->next[i]=NULL;
    }
    p->we=0;
    return p;
}

node *Insert(node *root, string str){
    node *p, *T;
    T=root;
    
    for(auto c:str){
        int x=c-'a';
        if(T->next[x]!=NULL){
            T=T->next[x];
        }
        else{
            p=MakeNode();
            T->next[x]=p;
            T=p;
        }
    }
    p->we=1;
    return root;
    
}

bool TrieSearch(node *root, string str){
   node *T;
   T=root;
   for(auto c:str){
    int x=c-'a';
    if(T->next[x]!=NULL){
          T=T->next[x];
    }
    else{
        return false;
    }

   }

   if(T->we==1){ 
    return true;
   }
   else{
    return false;
   }
}

int main(){
    node *root;
    root=MakeNode();
    root=Insert(root,"apple");
    root=Insert(root,"able");
    root=Insert(root,"apply");
    root=Insert(root,"bad");
    root=Insert(root,"band");
    root=Insert(root,"way");
    root=Insert(root,"wave");
    root=Insert(root,"total");
    root=Insert(root,"wages");
    root=Insert(root,"sun");
    cout<<TrieSearch(root,"able")<<endl;
    cout<<TrieSearch(root,"moon")<<endl;
}