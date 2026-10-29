#include<iostream>
using namespace std;

class Example{
    int a,b;
    public: 
       void getData(int,int);
       int sum(Example,Example);
       int sum1(Example,Example);
 };

 void Example::getData(int a1, int b1){
    a=a1;
    b=b1;
 }

 int Example::sum(Example A, Example B){
    int r=A.a+B.a;
    return r;
 }

 int Example::sum1(Example A, Example B){
    int s=A.b+B.b;
    return s;
 }

 int main(){
    Example E1,E2,E3;
    E1.getData(10,20);
    E2.getData(30,40);
    int res = E3.sum(E1,E2);
    cout<<res<<" ";
    int ans=E3.sum(E1,E2);
    cout<<ans;
    return 0;
 }