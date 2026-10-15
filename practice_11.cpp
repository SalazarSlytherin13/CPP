#include<iostream>
using namespace std;

class Example{
    static int count;
    public:
      void increament();
      void display();
};

void Example::increament(){
    count++;
}

void Example::display(){
    cout<<count;
}

int Example::count=0;

int main(){
    Example E1, E2, E3;

    E1.increament();
    E2.increament();
    E3.increament();

    E2.display();

}