#include<iostream>
using namespace std;

class Outer{
    public:
    class Inner{
        int x;
        public:
          Inner(){
            x=100;
          }
    };

    void show(){
        Inner obj;
        cout<<obj.x<<endl; //Outer class methods cannot access private members of the Inner Class
    }
};

int main(){
    Outer O1;
    O1.show();

    return 0;
}