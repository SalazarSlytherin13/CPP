#include<iostream>
using namespace std;

int Power(int a, int b){
    if(b==0){
        return 1;
    }

    else{
        return a*Power(a,b-1);
    }
}

int main(){
    int x,y;
    cout<<"Enter the base: ";
    cin>>x;

    cout<<"Enter the power: ";
    cin>>y;

    cout<<"The number is: "<<Power(x,y);

    return 0;

}