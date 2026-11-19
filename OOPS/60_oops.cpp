#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       Example();
       Example(int);
       void display();
       friend Example operator -(Example);
};

Example::Example(){
    a=0;
}

Example::Example(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

Example operator -(Example E1){
    Example S;
    S.a=-E1.a;
    return S;
}

int main(){
    Example A(20);
    A.display();

    Example B;
    B=-A;

    B.display();

    return 0;

}