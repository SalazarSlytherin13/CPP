#include<iostream>
using namespace std;

class B;

class A{
    int a;
    public:
      void geta(int);
      friend void swap(A,B);
};

class B{
    int b;
    public:
      void getb(int);
      friend void swap(A,B);
};

void A::geta(int x){
    a=x;
}

void B::getb(int y){
    b=y;
}

void swap(A A1, B B1){
    int t;
    t=A1.a;
    A1.a=B1.b;
    B1.b=t;
    cout<<A1.a<<" "<<B1.b;
}

int main(){
    A obj1;
    B obj2;

    int n1,n2;
    cin>>n1>>n2;

    obj1.geta(n1);
    obj2.getb(n2);

    swap(obj1,obj2);
}