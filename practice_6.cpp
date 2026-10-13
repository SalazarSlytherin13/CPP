#include<iostream>
using namespace std;

namespace first{
    float sum(int x, float y){
        float z=x+y;
        return z;
    }
}

namespace second{
    int sum(int a, int b){
        int c=a+b;
        return c;
    }
}

int main(){
    int n1, n2;
    float f1;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2>>f1;

    int sum=n1+n2+f1;
    cout<<"Sum-1: "<<sum<<endl;

    cout<<"Sum-2: "<<first::sum(n1,f1)<<endl;

    cout<<"Sum-3: "<<second::sum(n1,n2)<<endl;

    return 0;

}