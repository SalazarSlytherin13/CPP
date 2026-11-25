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
          int getX(){
            cout<<x;
          }
    };

    void show(){
        Inner obj;
        // cout<<obj.x<<endl; 
    }
};

int main(){
    Outer O1;
    O1.show();

    return 0;
}