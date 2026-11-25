#include<iostream>
using namespace std;

class Example{
    int id;
    public:
      Example(int);
      void display();
};

Example::Example(int x){
    id=x;
}

void Example::display(){
    cout<<"ID = "<<id<<endl;
}

int main(){
    Example *ID=new Example(1001);
    ID->display();

    delete ID;
}