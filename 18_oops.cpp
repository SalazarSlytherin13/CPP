#include<iostream>
using namespace std;

class Example{
    int a;
    static int n;

    public: 
      void geta(int);
      void display();
      static void show();
};

int Example::n=10;

void Example::geta(int x){
    a=x;
    
}

void Example::display(){
    cout<<a<<"\n";
    cout<<n<<"\n";

}

void Example::show(){
    cout<<"Inside class member function: "<<n;
}

int main(){
    Example E1;
    E1.geta(8);
    E1.display();
    Example::show();
}