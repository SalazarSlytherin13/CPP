#include<iostream>
using namespace std;

class Example{
    static int a;
    public:
       void getData(int);
       void display();
};

void Example::getData(int x){
    a=x;
}

void Example::display(){
    cout<<a<<endl;
}

int Example::a=10;

int main(){
    int n1;
    cout<<"Enter the number: ";
    cin>>n1;
    Example E1, E2;
    
    E1.display();

    E2.getData(n1);
    E2.display();


}
