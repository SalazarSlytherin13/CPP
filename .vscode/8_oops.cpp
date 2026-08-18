#include<iostream>
using namespace std;

namespace first{
    int a=10;
}

namespace second{
    double a=10.5;
}

int main(){
    string a="C++";
    cout<<a<<"\n";
    cout<<second::a<<"\n";
    cout<<first::a<<"\n";
}