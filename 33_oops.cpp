#include<iostream>
using namespace std;

class Div{
    float a,b;
    public:
       Div();
       void print();
};

Div::Div(){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
}

void Div::print(){
    if(b!=0){
        cout<<"On dividing we get: "<<a/b;
    }

    else{
        cout<<"Division not possible";
    }
}

int main(){
    Div D;
    D.print();
}