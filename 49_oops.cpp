#include<iostream>
using namespace std;

class Area{
    float r;
    public:
       void getData(float);
       void display();
};

void Area::getData(float radius){
    r=radius;
}

void Area::display(){
    float a=3.14*r*r;;
    cout<<"Area of circle: "<<a;
}

int main(){
    float x;
    cout<<"Enter the radius: ";
    cin>>x;

    Area A1;
    A1.getData(x);
    A1.display();
}
