#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       Example(int);
       void display();
       friend Example operator ++(Example&, int);
};

Example::Example(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

Example operator ++(Example &E1, int){
    E1.a++;
    return E1;
}

int main(){
    Example A(10);
    A.display();

    Example B(0);
    B=A++;

    B.display();
    A.display();

    return 0;
}