#include<iostream>
using namespace std;

class Example{
    int a;
    public:
       Example(int);
       void display();
};

Example::Example(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

int main(){
    Example E(10);
    E.display();
   
    Example *ptr=&E;
    cout<<ptr<<endl;
    ptr->display();
    (*ptr).display();

    return 0;
}