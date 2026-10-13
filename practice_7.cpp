#include<iostream>
using namespace std;

namespace Spring{
    int x=10;
    void display(){
        cout<<"Spring"<<endl;
    }
}

namespace Autumn{
    double y=20.33;
    void display(){
        cout<<"Autumn"<<endl;
    }
}

float x=40.5;

void display(){
    cout<<"Winter"<<endl;
}

int main(){
   string x="Summer";
   cout<<x<<endl;

   cout<<::x<<endl;
   display();

   cout<<Spring::x<<endl;
   Spring::display();

   cout<<Autumn::y<<endl;
   Autumn::display();

}