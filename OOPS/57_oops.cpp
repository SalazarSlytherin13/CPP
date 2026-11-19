#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
       void getData(int, int);
       void display();
       Example operator +(Example);  //operator overloading
};

void Example::getData(int x, int y){
    a=x;
    b=y;
}

void Example::display(){
    cout<<a<<" "<<b<<endl;
}

Example Example::operator+(Example E){
  Example S;
  S.a=a+E.a;
  S.b=b+E.b;

  return S;
}

int main(){
    Example A,B,C;

    A.getData(100,200);
    A.display();

    B.getData(110,220);
    B.display();

    C=A+B;
    C.display();
}