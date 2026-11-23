#include<iostream>
using namespace std;

class Outer{
    public:
       class Inner{
           public:
              void show();
       };
};

void Outer::Inner::show(){
    cout<<"Inner class method";
}


int main(){
    Outer::Inner obj;
    obj.show();

    return 0;
}