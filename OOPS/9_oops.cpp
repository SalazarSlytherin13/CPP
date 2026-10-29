#include<iostream>
using namespace std;

namespace first{
    int x=10;
    void display(){
        cout<<"A";
    }
}

namespace second{
    double x=10.5;
    void display(){
        cout<<"B";
    }
}

void display(){
   cout<<"Main"<<"\n";
}

int main(){
    string x="CSE-36";
    display();
   cout<<x;
   cout<<first::x<<"\n";
   first::display();
   cout<<second::x<<"\n";
   second::display();
}