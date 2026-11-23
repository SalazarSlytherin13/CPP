#include<iostream>
using namespace std;

class Outer{
    public:
       static int value;
       class Inner{
        public:
           void show(){
            cout<<"Value = "<<Outer::value<<endl;
           }
       };
};

int Outer::value=100;

int main(){
    Outer::Inner obj;
    obj.show();

    return 0;
}

