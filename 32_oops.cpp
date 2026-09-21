#include<iostream>
using namespace std;

class Swap{
    int a,b;
    public:
      Swap(int, int);
      void display();
};

Swap::Swap(int x, int y){
    a=x;
    b=y;
}

void Swap::display(){
    int temp=a;
    a=b;
    b=temp;

    cout<<"Swapped values are: "<<a<<" "<<b;
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    Swap S1(n1,n2);

    S1.display();
}