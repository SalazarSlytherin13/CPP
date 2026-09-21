#include<iostream>
using namespace std;

class Example{
    int a,b;
    public:
      Example();       //Default Constructor
      void display();
};

Example::Example(){
     cin>>a>>b;
}

void Example::display(){
    cout<<"The given numbers are: "<<a<<" "<<b;
}

int main(){
    Example E1;
    E1.display();
}