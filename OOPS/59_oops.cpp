#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       Example();
       Example(int);
       void display();
       Example operator -();
};

Example::Example(){
    a=0;
}


Example::Example(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

Example Example::operator -(){
   Example S;
   S.a=-a;
   return S;
}

int main(){
    Example E1(10);

    E1.display();

    Example E2;

    E2=-E1;

    E2.display();
    

    return 0;
    

}