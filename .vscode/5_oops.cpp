#include<iostream>
using namespace std;

class Example{
    int a,b;
    int add();

    public:
      void getData(int, int);
};

void Example::getData(int x, int y){
    a=x;
    b=y;
    int res=add();
    cout<<"The sum is: "<<res;
}

int Example::add(){
    int r=a+b;
    return r;
}

int main(){
    Example E;
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    E.getData(n1,n2);
    // cout<<"The sum is: ";
    // E.add();
    return 0;
}