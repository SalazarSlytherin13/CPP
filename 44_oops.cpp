#include<iostream>
using namespace std;

class Example{
    int a,b;
    public:
       Example(int, int);
       void display();
       ~Example();
};

Example::Example(int x, int y){
    a=x;
    b=y;
}

void Example::display(){
    cout<<"The values of a and b are: "<<a<<" "<<b<<endl;
}

Example::~Example(){
    cout<<"Object Deleted";
}

int main(){
    int n1,n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    Example E1(n1,n2);
    E1.display();
}