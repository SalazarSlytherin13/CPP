#include<iostream>
using namespace std;

class Area{
    float r;

    public:
      void getData(float);
      float printArea();
};

void Area::getData(float x){
    r=x;
}

float Area::printArea(){
    float a=3.14*r*r;
    return a;
}

int main(){
    Area A;
    float r1;
    cout<<"Enter the radius: ";
    cin>>r1;
    A.getData(r1);
    float area= A.printArea();
    cout<<"The area of the circle is: "<<area;

    return 0;

}