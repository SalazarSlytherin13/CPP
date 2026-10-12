#include<iostream>
using namespace std;

class Sum{   //Sum of two numbers
    int a,b;
    public:
      void getData(int, int);
      int sum();
};

void Sum::getData(int x, int y){
    a=x;
    b=y;
}

int Sum::sum(){
    int c = a+b;
    return c;
}

int main(){
    int n1, n2;
    cout<<"Enter the nummbers: ";
    cin>>n1>>n2;

    Sum S;
    S.getData(n1,n2);

    cout<<"The sum of numbers is: "<<S.sum();

    return 0;
}