#include<iostream>
using namespace std;

class Example{
    int a;
    public: 
      void getA(int);
      int sum(Example, Example);
};

void Example:: getA(int a1){
    a=a1;
}

int Example:: sum(Example A, Example B){
    int S=A.a+B.a;
    return (S);
}

int main(){
    Example E1, E2, E3;
    E1.getA(10);
    E2.getA(20);
   int r= E3.sum(E1,E2);
   cout<<r;
   return 0;
    
}