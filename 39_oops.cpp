#include<iostream>
using namespace std;

class Test;

class Example{
    int a;
    public: 
       Example(int);
       void displayA();
       void show(Test);
};

class Test{
    int b;
      public: 
        Test(int);
        void displayB();
        friend void Example::show(Test);
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

void Example::show(Test T){
    cout<<2*(T.b);
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;

    Example E(n1);
    Test T= Test(n2);

    E.displayA();
    T.displayB();
    
    E.show(T);
}