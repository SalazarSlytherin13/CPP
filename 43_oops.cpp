#include<iostream>
using namespace std;

class Example{
    public:
       Example();
       ~Example();
};

Example::Example(){
    cout<<"Constructor Called"<<endl;
}

Example::~Example(){
    cout<<"Destructor Called"<<endl;
}


int main(){
    Example E1, E2, E3;
}
