#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
        void getData(int, int);
        void show();
        static int c;
};

int Example::c=30;

void Example::getData(int x, int y){
    a=x;
    b=y;
}

void Example::show(){
    cout<<a<<" "<<b<<endl;
}

int main(){
    Example E1, E2;

    E1.getData(10,20);
    E1.show();

    E2.getData(100,200);
    E2.show();

    cout<<Example::c;

}