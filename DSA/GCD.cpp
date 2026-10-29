#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a>b){
        return GCD(a-b, b);
    }

    if(a<b){
        return GCD(a, b-a);
    }

    else{
        return a;
    }
}

int main(){
    int x, y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;

    cout<<"The GCD is: "<<GCD(x, y);
    return 0;

}