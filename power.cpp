#include<iostream>
using namespace std;

int pow(int a, int n){
    if(n==0){
        return 1;
    }

    else{
        int x;
        x=pow(a,n/2);

        if(n%2==0){
            return x*x;
        }

        else{
            return a*x*x;
        }
    }
}

int main(){
    int x;
    cout<<"Enter the base: ";
    cin>>x;

    int y;
    cout<<"Enter the power: ";
    cin>>y;

    cout<<"Required number is: "<<pow(x,y);
    return 0;
}