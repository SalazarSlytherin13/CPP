#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       Example(int);
       void display();
       friend Example operator ++(Example &);
};

Example::Example(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

Example operator ++(Example &E1){
    ++E1.a;
    return E1;
}

int main(){
    Example A(20);
    A.display();

    Example B(0);
    B=++A;
    A.display();
    B.display();

    return 0;
}