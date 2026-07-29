// Sum of two numbers using Pass By Value

#include<iostream>
using namespace std;

int add(int, int);

int main(){
    int x,y,z;
    cout<<"Enter the values: "<<"\n";
    cin>>x>>y;
    z=x+y;
    cout<<z<<"\n";
    return 0;
}

int add(int a, int b){
    int c=a+b;
    return c;
}