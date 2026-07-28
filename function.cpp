// Addition of two numbers

// #include<iostream>
// using namespace std;

// int add(int a, int b){
//     int c=a+b;
//     return c;
// }

// int main(){
//     int x=2,y=3,z;
//     z=add(x,y);
//     cout<<z<<"\n";
//     return 0;
// }

#include<iostream>
using namespace std;

float sum(float a, float b){
    float c=a+b;
    return c;
}

int main(){
    float x=2.3,y=5.5,z;
    z=sum(x,y);
    cout<<z<<"\n";
    return 0;
}