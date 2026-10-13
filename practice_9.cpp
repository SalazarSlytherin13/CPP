#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       void getData(int);
       int sum(Example, Example);
};

void Example::getData(int x){
    a=x;
}

int Example::sum(Example E1, Example E2){
   int S=E1.a + E2.a;
    return S;
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;

    Example E1, E2, E3;
    E1.getData(n1);
    E2.getData(n2);

    cout<<E3.sum(E1,E2);
}
