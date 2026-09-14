#include<iostream>
using namespace std;

class B;
              //making the member function of one class friend of another class
class A{
    public:
      void display(B);
};

class B{
    int b;
    public:
      void getb(int);
      friend void A::display(B);
};

void B::getb(int y){
    b=y;
}

void A::display(B B1){
    cout<<B1.b;
}

int main(){
    B obj1;
    A obj2;

    int n;
    cin>>n;

    obj1.getb(n);
    
    obj2.display(obj1);
    // obj1.diplay(obj1);   error since display() is member function of A

}
