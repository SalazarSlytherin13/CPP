#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p = &a;
    cout<<a<<"\n";
    cout<<*(&a)<<"\n";
    cout<<*p<<"\n";
    cout<<*(&p)<<"\n";
    cout<<&a<<"\n";
    cout<<&p<<"\n";
    return 0;
}