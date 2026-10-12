#include<iostream>
using namespace std;

class Example{   //Private member function can be declared normally and then called inside a public member function
    int a,b;
    void add();
    public:
       void getData(int, int);
       int sum();

};

void Example::add(){
    int t=a+b;
    cout<<"Sum of numbers is: "<<t<<endl;
}

void Example::getData(int x, int y){
    a=x;
    b=y;
}

int Example::sum(){
   int c=2*a+b;
   cout<<"The second sum is: "<<c<<endl;

   add();
    
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;

    Example E1;
    E1.getData(n1,n2);
    E1.sum();

    return 0;
}