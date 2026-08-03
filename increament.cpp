#include<iostream>
using namespace std;

// int main(){
//     int a,b;
//     a=3;
//     b= a++ + ++a;
//     cout<<a<<" "<<b;
//     return 0;
// }

// int main(){
//     int a,b;
//     a=5;
//     b= a++ + a + a++;
//     cout<<a<<" "<<b;
//     return 0;
// }

int main(){
    int a,b;
    a=5;
    b= ++a + ++a;
    cout<<a<<" "<<b;
    return 0;
}