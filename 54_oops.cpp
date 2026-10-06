#include<iostream>
using namespace std;

class Example{
    static int count;
    int n;
    public:
       void getData(int);
       void show();
};

int Example::count;

void Example::getData(int x){
    n=x;
    count++;
}

void Example::show(){
    cout<<"The count is: "<<count<<endl;
    count<<n;
}

int main(){
    Example E1;

    E1.getData(100);
    E1.show();

}