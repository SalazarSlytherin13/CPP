#include<iostream>
using namespace std;

class Example{
    int a,b;
    public:
       Example();
       void print();
};

Example::Example(){
    cin>>a>>b;
}

void Example::print(){
    cout<<"The given numbers are: "<<a<<" "<<b<<endl;
}

int main(){
    Example E1;
    E1.print();
    Example E2=E1;  //Copy Constructor
    E2.print();

}