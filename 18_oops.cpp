#include<iostream>
using namespace std;

class Example{
    int a;
    static int count;       //creation of class variable tells about the no. of objects created

    public: 
      void getdata(int);
      void display();
};

int Example::count;

void Example::getdata(int x){
    a=x;
    count++;
    
}

void Example::display(){
    cout<<a<<"\n";
    cout<<count<<"\n";

}


int main(){
    Example E1, E2, E3;
    E1.getdata(11);
    E1.display();
    E2.getdata(20);
    E2.display();
    E3.getdata(30);
    E3.display();
   
}