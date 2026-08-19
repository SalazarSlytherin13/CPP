#include<iostream>
using namespace std;

namespace start{
    int sum(int a, float b){
        int d=a+b;
        return d;
       
    }
}

namespace second{
    int sum(int a, int b){
        int c=a+b;
        return c;
    }
}
// namespace first{
//     int a=10;
// }

// namespace second{
//     double a=10.5;
// }

int main(){

    int n1,n2;
    float n3;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2>>n3;
    
    int sum=n1+n2+n3;
    cout<<sum<<"\n";


    int x=start::sum(n1,n3);
    int y=second::sum(n1,n2);

    cout<<x<<" "<<y;
//     string a="C++";
//     cout<<a<<"\n";
//     cout<<second::a<<"\n";
//     cout<<first::a<<"\n";
}