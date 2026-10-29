#include<iostream>
using namespace std;

class Example{
    static int count;

    public:
      static void display();
};


int Example::count=10;

void Example::display(){
    cout<<count;
}

int main(){
    Example E;
    Example::display();   //class variables can be accessed using objects but that method is not recommended
    E.display();
}



