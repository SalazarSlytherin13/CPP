// Sum of two numbers using Pass By Address

#include<iostream>
using namespace std;

// Function Declaration
int sum(int *, int *);

// Caller Function
int main(){
    int a,b,r;
    cout<<"Enter the value: "<<"\n";
    cin>>a>>b;
    cout<<&a<<"\n";
    cout<<&b<<"\n";
    r=sum(&a,&b);   
    cout<<r<<"\n";
    cout<<*(&a)<<" "<<*(&b)<<"\n";
    return 0;
}

// Function Definition
int sum(int *x, int *y){
    int s= *x + *y;
    return s;
}

