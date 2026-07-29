#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<sizeof(char)<<"\n";
    cout<<sizeof(float)<<"\n";    
    cout<<sizeof(double)<<"\n";
    cout<<sizeof(long)<<"\n";
    cout<<sizeof(long long)<<"\n";
    cout<<sizeof(a)<<"\n";
    int *p = &a;
    cout<<a<<"\n";
    cout<<*(&a)<<"\n";
    cout<<*p<<"\n";
    cout<<*(&p)<<"\n";
    cout<<&a<<"\n";
    cout<<&p<<"\n";
    return 0;
}