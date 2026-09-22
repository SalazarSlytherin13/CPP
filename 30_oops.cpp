#include<iostream>
using namespace std;

class Example{
    int a,b;
    public:
      Example(int, int);   //Parameterized Constructor
      void display();
};

Example::Example(int x, int y){
    a=x;
    b=y;
}

void Example::display(){
    cout<<"The required numbers are: "<<a<<" "<<b;
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    Example E1=Example(n1,n2);   //Calling the constructor explicitily

    E1.display();
    

    Example E2(n1,n2);   //Calling the constructor implicitily
    E2.display();
}