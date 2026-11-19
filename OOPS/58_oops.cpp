#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
       void getData(int, int);
       void display();
       friend Example operator +(Example, Example);
};

void Example::getData(int x, int y){
    a=x;
    b=y;
}

void Example::display(){
    cout<<a<<" "<<b<<endl;
}

Example operator +(Example E1, Example E2){
   Example S;
   S.a=E2.a+E1.a;
   S.b=E2.b+E1.b;

   return S;
}

int main(){
    Example A, B, C;
    A.getData(10,20);
    B.getData(100,200);

    A.display();
    B.display();

    C=A+B;

    C.display();

    return 0;

}
