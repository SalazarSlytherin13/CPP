#include<iostream>
using namespace std;

int main(){
    // int x=10;
    // int *ptr;
    // ptr=&x;
    // cout<<x<<"\n";
    // cout<<&x<<"\n";
    // cout<<*(&x)<<"\n";
    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";
    // cout<<&ptr<<"\n";
    // return 0;

    // char x='A';
    // char *ptr=&x;
    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";
    // cout<<x<<"\n";
    // cout<<&x<<"\n";
    // return 0; 


    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    // for(int i=0;i<10;i++){
    //     cout<<&arr[i]<<" "<<*(&arr[i])<<"\n";
    // }
  
    
    int *ptr=arr;
    // cout<<ptr<<" "<<*ptr<<"\n";
    // cout<<*(ptr+1)<<"\n";
    // cout<<*(ptr+2)<<"\n";
    // cout<<*(ptr+3)<<"\n";
    // cout<<*(ptr+4)<<"\n";
    // cout<<*(ptr+5)<<"\n";
    // cout<<*(ptr+6)<<"\n";
    // cout<<*(ptr+7)<<"\n";
    // cout<<*(ptr+8)<<"\n";
    // cout<<*(ptr+9)<<"\n";

    for(int i=0;i<10;i++){
        cout<<*(ptr+i)<<"\n";
    }
   
    return 0;

}