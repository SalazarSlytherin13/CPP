#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
       void getDataA(int, int);
       void displayA();
       A sum(A &);
};

void A::getDataA(int x, int y){
    a=x;
    b=y;
}

void A::displayA(){
   cout<<"The value of a belonging to class A: "<<a<<endl;
    cout<<"The value of b belonging to class A: "<<b<<endl;
}

A A::sum(A &A1){
     A A0;
     A0.a=a+A1.a;
     A0.b=b+A1.b;
     return A0;
}

int main(){
    int n1,n2,m1,m2;
    A obj1, obj2, obj3;

    cout<<"Enter the numbers for first object: ";
    cin>>n1>>n2;

    cout<<"Enter the numbers for second object: ";
    cin>>m1>>m2;

    obj1.getDataA(n1,n2);
    obj1.displayA();

    obj2.getDataA(m1,m2);
    obj2.displayA();

    obj3 = obj1.sum(obj2);

    obj3.displayA();


}