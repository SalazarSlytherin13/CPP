#include<iostream>
using namespace std;

class Swap{
    int n,a,b;

    public:
     void getData(int, int, int);
     int display();
};

void Swap::getData(int x, int y, int z){
    x=(10*y)+z;
    n=x;
    a=y;
    b=z;
}

int Swap::display(){
    b=a;
    a=b;
    int r=(10*a)+b;
    return r;
}

int main(){
    Swap S;
    int n1,c,d;
    cout<<"Enter the number: ";
    cin>>n1>>c>>d;

}