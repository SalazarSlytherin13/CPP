#include<iostream>
using namespace std;

class Example{
    int a;
    public:
      void geta(int);
      Example sum(Example,Example);
      void display(Example);
};

void Example::geta(int x){
    a=x;
}

Example Example::sum(Example E1, Example E2){
    Example S;
    S.a=E1.a+E2.a;
    return S;
}

void Example::display(Example E){
    cout<<E.a;
}

int main(){
    Example A,B,C,R;
    int n1,n2;
    cin>>n1>>n2;

    A.geta(n1);
    B.geta(n2);

    R=C.sum(A,B);
    R.display(R);
}