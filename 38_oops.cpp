#include<iostream>
using namespace std;

class Test;

class Example{
    int a;
    public:
        Example(int);
        void displayA();
        friend void sum(Example,Test);
};

class Test{
    int b;
    public:
       void displayB();
       Test(int);
       friend void sum(Example,Test);
};

Example::Example(int x){
    a=x;
}

void Example::displayA(){
    cout<<a<<endl;
}

Test::Test(int y){
    b=y;
}

void Test::displayB(){
    cout<<b<<endl;
}

void sum(Example E1, Test T1){
    int s=E1.a+T1.b;
    cout<<"The sum of these two numbers are: "<<s;
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;

    Example E(n1);
    Test T= Test(n2);

    E.displayA();
    T.displayB();

    sum(E,T);
}

