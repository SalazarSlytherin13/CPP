#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a>b){
        return gcd(a-b,b);
    }

    else if(a<b){
        return gcd(a,b-a);
    }

    else{
        return a;
    }
}

int main(){
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;

    cout<<"The gcd of the given numbers is: "<<gcd(x,y);
    return 0;
}