#include<iostream>
using namespace std;

class B;    //making as entire class the friend of another class

class A{
    int a;
    public:
      void geta(int);
      friend class B;
};

class B{
    public:
      void display(A); //friend function of class A
      // void show();  //not a friend function just a member function of class B
};

void A::geta(int x){
    a=x;
}

void B::display(A A1){
    cout<<A1.a;
}

int main(){
    A obj1;
    B obj2;

    int n;
    cin>>n;

    obj1.geta(n);

    obj2.display(obj1);
//  obj1.display(obj1);  
 }