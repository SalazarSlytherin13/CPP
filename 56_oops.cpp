#include<iostream>
using namespace std;

class Rectangle;

class Circle{
    int r;
    public:
       void getr(int);
       void showr();
       friend void compare(Rectangle, Circle);
       
};

class Rectangle{
    int l,b;
    public:
      void getData(int, int);
      void show();
      friend void compare(Rectangle, Circle);
};

void Circle::getr(int radius){
    r=radius;
}

void Circle::showr(){
    cout<<r<<endl;
}

void Rectangle::getData(int length, int breadth){
    l=length;
    b=breadth;
}

void Rectangle::show(){
    cout<<l<<" "<<b<<endl;
}

void compare(Rectangle R1, Circle C1){
    int areaR = R1.l*R1.b;
    int areaC = 3.14*C1.r*C1.r;

    if(areaR >= areaC){
        cout<<"Rectangle is larger"<<endl;
    }

    else{
        cout<<"Circle is larger"<<endl;
    }
}

int main(){
    Circle C;
    
    C.getr(2);
    C.showr();

    Rectangle R;

    R.getData(2,3);
    R.show();

    compare(R,C);
}