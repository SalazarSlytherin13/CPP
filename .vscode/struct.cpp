#include<iostream>
using namespace std;

// struct Time{
//     int hour;
//     int minute;
//     int second;
// };


// int main(){
//    Time T={7,15,20};
//    cout<<T.hour<<":"<<T.minute<<":"<<T.second<<"\n";

//    Time *ptr=&T;
//    cout<<ptr->hour<<":"<<ptr->minute<<":"<<ptr->second<<"\n";
// }

struct node{
    int data;
    struct node*next;
};

node *GetNode(){
    node *p;
    p=(node*)malloc(sizeof(struct node));
    return p;
}

// node *FreeNode(){
//     node *p;

// }


node *InsBeg(node *Head, int x){
    node *p;
    p=GetNode();
    p->data=x;
    p->next=Head;
    Head=p;
    return Head;

}

void Traverse(node *Head){
    node *p;
    p=Head;
    while(p != NULL){
        cout<<p->data<<", ";
        p=p->next;

    }
}

node *InsEnd(node *Head, int x){
    node *q;
    q=GetNode();
    q->data=x;
    q->next=NULL;

    if(Head==NULL){
        Head=q;
    }

    else{

    node *p;
    p=Head;
    while(p->next !=NULL){
        p=p->next;
    }
    
    p->next=q;
   
}
return Head;
}

node *InsAft(node *Head, node *p, int x){
    node *q,*r;
    r=GetNode();
    r->data=x;

    q=p->next;
    p->next=r;
    r->next=q;
    return Head;

}

node* DelBeg(node* Head){
    node* p=Head;
    Head=Head->next;
    int x=p->data;
    free(p);
    cout<<"Deleted node is: "<<x<<"\n";
    return Head;


}

node* DelAft(node* Head,node* p){
    node* q=GetNode();
    q=p->next;
    node*r=GetNode();
    r=q->next;
    int x=q->data;
    free(q);
    cout<<"Deleted node is: "<<x<<"\n";
    return Head;

}

node* Push(node* Top, int x){
    // Top=InsBeg(Top,x);
    // return Top;
    node *p;
    p=GetNode();
    p->data=x;
    p->next=Top;
    Top=p;
    return Top;
}

node* Pop(node* Top){
    // int x=Top->data;
    // cout<<"Popped Element is: "<<"\n";
    // Top=DelBeg(Top);
    // return Top;
    if(Top==NULL){
        node* p;
        p=Top;
        Top=Top->next;
        int x=p->data;
        cout<<"Popped Element is: "<<x<<endl;
        free(p);
        return Top;

    }

}

int StackTop(node* Top){
    int x=Top->data;
    return x;
}

bool IsEmpty(node* Top){
    if(Top==NULL){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    node* Top=NULL;
    Top=Push(Top,1);
    Top=Push(Top,2);
    Top=Push(Top,3);
    Top=Push(Top,4);
    Top=Push(Top,5);
    StackTop(Top);
//     node *Head=NULL;

//     Head=InsBeg(Head,1);
//     Head=InsBeg(Head,2);
//     Head=InsBeg(Head,3);
//     Head=InsBeg(Head,4);
//     Head=InsBeg(Head,5);
//     Head=InsBeg(Head,6);
//     Head=InsBeg(Head,7);
//     Head=InsBeg(Head,8);
//     Head=InsEnd(Head,100);

//     node *p=Head;
//     int pos=4;
//     if(pos==1){
//         Head=InsBeg(Head,400);
//     }

//     else{
//     for(int i=1;i<pos-1;i++){
//         p=p->next;
//     }
//     Head=InsAft(Head,p,300);
// }

// Traverse(Head);

// Head=DelBeg(Head);
// Traverse(Head);



return 0;





}
