#include<iostream>
using namespace std;

class Sum{
    int a,b;
    public:
       Sum(int, int);
       void print();
};

Sum::Sum(int x, int y){
    a=x;
    b=y;
}

void Sum::print(){
    int s=a+b;
    cout<<"The sum of the given two numbers is: "<<s;
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;

    Sum S1(n1,n2);
    S1.print();

}