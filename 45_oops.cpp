#include<iostream>
using namespace std;

class Example{
    static int count;
    public:
      Example();
      ~Example();
};

int Example::count;

Example::Example(){
    count++;
    cout<<"The number of objects created: "<<count<<endl;
}

Example::~Example(){
    cout<<"The number of objects destructed: "<<count<<endl;
    count--;
}

int main(){
    Example E1, E2, E3;
}