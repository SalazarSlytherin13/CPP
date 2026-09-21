#include<iostream>
using namespace std;

class Area{
    int r;
    public:
      Area(int);
      void display();
};

Area::Area(int x){
    r=x;
}

void Area::display(){
    cout<<"Area of the circle is: "<<3.14*r*r;
}

int main(){
    int n;
    cin>>n;
    Area A1(n);

    A1.display();
}