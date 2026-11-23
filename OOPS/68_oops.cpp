#include<iostream>
using namespace std;

class Outer{
    class Inner{
        public:
           void display(){
            cout<<"Private Nested Class";
           }
    };

    public:
       void show(){
        Inner obj;
        obj.display();
       }
};

int main(){
   Outer O1;
   O1.show();

   return 0;
}