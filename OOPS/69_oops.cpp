#include<iostream>
using namespace std;

class Outer{
    class Inner{
        public:
           void display();
    };

    public:
        void show();
};

void Outer::Inner::display(){
    cout<<"Private Nested Class";
}

void Outer::show(){
    Inner obj;
    obj.display();
}

int main(){
    Outer O1;
    O1.show();

    return 0;
}