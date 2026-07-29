#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &b=a;
    a=a+10;
    cout<<"Address of a: "<<&a<<"\n";
    cout<<"Address of b: "<<&b<<"\n";
    cout<<*(&a)<<"\n";
    cout<<*(&b)<<"\n";
    cout<<"Value of a: "<<a<<"\n";
    cout<<"Value of b: "<<b<<"\n";
    return 0;
}