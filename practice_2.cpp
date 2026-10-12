#include<iostream>
using namespace std;

class Area{
    float r;
    public:
       void getData(float);
       float areaCircle();
};

void Area::getData(float radius){
    r=radius;
}

float Area::areaCircle(){
    float a=3.14*r*r;
    return a;
}

int main(){
    float r1;
    cout<<"Enter the radius: ";
    cin>>r1;

    Area A1;
    A1.getData(r1);
    cout<<"The area of circle is: "<<A1.areaCircle();

    return 0;
}