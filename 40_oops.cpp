#include<iostream>
using namespace std;

class Example{
    int a,b;
    public: 
       Example();  
       Example(Example &);   //Passing objects in Parameterized Constructor
       void display();
};                           //Constructor Overloading

Example::Example(){
    cin>>a>>b;
}

Example::Example(Example &E){
    a=E.a;
    b=E.b;
}

void Example::display(){
    cout<<a<<" "<<b<<endl;
}

int main(){
    Example E1;
    E1.display();

    Example E2(E1);
    E2.display();
}