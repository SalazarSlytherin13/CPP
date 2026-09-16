#include<iostream>
using namespace std;

class Example{
    int a;
    public: 
      void geta(int);
      friend Example sum(Example,Example);
      void display(Example);
};

void Example::geta(int x){
    a=x;
}

Example sum(Example E1,Example E2){
    Example S;
    S.a=E1.a+E2.a;
    return S;
}

void Example::display(Example E){
    cout<<E.a;
}

int main(){
    Example A,B,C;
    int n1, n2;
    cin>>n1>>n2;
    
    A.geta(n1);
    B.geta(n2);
    C=sum(A,B);
    C.display(C);

    
}