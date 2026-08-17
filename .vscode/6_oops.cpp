#include<iostream>
using namespace std;

class Sum{
    int a,b;
    float c,d;
    
    public:
      void sum();
      int sum(int, int);
      float sum(float,float,int);
    //   void getData(int, int);
};

// void Sum::getData(int x, int y){
//     a=x;
//     b=y;
// }

void Sum::sum(){
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c>>d;
    cout<<a+b;
    cout<<c+d;
}

int Sum::sum(int x, int y){
    a=x;
    b=y;
    int r=a+b;
    return r;
}

float Sum::sum(float x, float y,int z){
    c=x;
    d=y;
    a=z;
    float s=c+d+a;
    return s;
}

int main(){
    Sum S;
    int n1,n2;
    float n3,n4;
    cin>>n1>>n2>>n3>>n4;
    S.sum();
    cout<<"The sum is: ";
    S.sum(n1,n2);
    cout<<"THe sum is: ";
    S.sum(n3,n4,n1);

    
    return 0;


}