#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
       Example();
       Example(int, int);
       void display();
       Example Sum(Example &);
};

Example::Example(){
    a=0;
    b=0;
}

Example::Example(int x, int y){
    a=x;
    b=y;
}

void Example::display(){
    cout<<a<<" "<<b<<endl;
}

Example Example::Sum(Example &E1){
    Example S;  //Example S(0,0) if you don't want to use default constructor
    S.display();
    S.a=E1.a + a;
    S.b=E1.b+b;

    return S;
}

int main(){
    
    int n1, n2, m1, m2;

    cout<<"Enter the numbers for A: ";
    cin>>n1>>n2;

    cout<<"Enter the numbers for B: ";
    cin>>m1>>m2;
    
    Example A(n1,n2);
    A.display();

    Example B(m1,m2);
    B.display();

    Example C;

    C=A.Sum(B);
    C.display();
    

}