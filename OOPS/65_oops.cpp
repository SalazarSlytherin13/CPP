#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
       Complex(int, int);
       void display();
       Complex operator +(Complex);
};

