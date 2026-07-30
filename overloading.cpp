#include<iostream>
using namespace std;

void sum();
int sum(int, int);
float sum(int, float, int);

int main(){
    int a,b,r1;
    float r2,c;
    cout<<"Enter the numbers: "<<"\n";
    cin>>a>>b>>c;

    sum();  //First function calling 

    r1=sum(a,b); // Second function calling
    r2=sum(a,c,b); // Third function calling
    cout<<"The sum is: "<<r1<<"\n";
    cout<<"The sum is: "<<r2<<"\n";
}

void sum(){
    int x,y,s;
    cout<<"Enter the numbers: "<<'\n';
    cin>>x>>y;
    s=x+y;
    cout<<"The sum is: "<<s<<"\n";
}

int sum(int x, int y){
    int z=x+y;
    return z;
}

float sum(int a, float b, int c){
    float d=a+b+c;
    return d;
}