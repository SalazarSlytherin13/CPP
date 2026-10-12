#include<iostream>
using namespace std;

class Add{
    int a,b,e;
    float c,d;
    public:
       void sum(int, int);
       int sum(int, int, int);
       float sum(float, float);
};

void Add::sum(int x, int y){
   a=x;
   e=y;
   int z=2*(a+e);
   cout<<"First sum: "<<z<<endl;
}

int Add::sum(int x, int y, int z){
    a=x;
    b=y;
    e=z;
    int s=a+b+e;
    return s;
}

float Add::sum(float x, float y){
    c=x;
    d=y;
    float r=c+d;
    return r;
}

int main(){
    int n1, n2, n3;
    float f1, f2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2>>n3>>f1>>f2;

    Add A1;
    A1.sum(n1,n3);

    cout<<"The second sum is: "<<A1.sum(n1,n2,n3)<<endl;

    cout<<"The third sum is: "<<A1.sum(f1,f2)<<endl;
 
    return 0;
   

}