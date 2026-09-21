#include<iostream>
using namespace std;

class Swap{
    int a,b;
    public:
      Swap();
      void display();
};

Swap::Swap(){
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
}

void Swap::display(){
    int temp=a;
    a=b;
    b=temp;

    cout<<"Swapped numbers are: "<<a<<" "<<b;
}

int main(){
    Swap S1;
    S1.display();
}