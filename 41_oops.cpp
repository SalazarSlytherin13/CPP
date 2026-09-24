#include<iostream>
using namespace std;

class Example{   //Constructor Overloading
    int a,b;
    public:
      Example();  //Default Constructor
      void show();
      Example(int, int);   //Parameterized Constructor
      
};


Example::Example(){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
}

void Example::show(){
    cout<<a<<" "<<b<<endl;
}

Example::Example(int x, int y){
    a=x;
    b=y;
}


int main(){
    Example E1;
    E1.show();

    int n1, n2;
    cin>>n1>>n2;

    Example E2(n1,n2);
    E2.show();

    Example E3 = E1;  //Copy Constructor
    E3.show();
}

