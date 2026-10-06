#include<iostream>
using namespace std;

class Example{
    int a;
    static int n;
    public:
       void getData(int);
       void show();
       static void display();
};

int Example::n=10;

void Example::getData(int x){
    a=x;
}

void Example::show(){
    cout<<a<<endl;
    cout<<n<<endl;
}

void Example::display(){
    cout<<n<<endl;
    // cout<<a<<endl;

}

int main(){
    Example E1;

    E1.getData(20);
    E1.show();

    // E1.display();   //Not recommended
 
    Example::display();
}


