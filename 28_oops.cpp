#include<iostream>
using namespace std;

class Sum{
    int a,b;
    public:
       Sum();
       void display();
};

Sum::Sum(){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    
}

void Sum::display(){
   int s=a+b;
   cout<<"Sum of two numbers is: "<<s;
}

int main(){
    Sum S1;
    S1.display();
}