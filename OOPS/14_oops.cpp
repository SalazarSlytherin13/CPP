#include<iostream>
using namespace std;

class Example{
    int a;
    public:
      void getData(int);
      void Swap(Example,Example);
};

void Example::getData(int x){
    a=x;
   
}

void Example::Swap(Example A, Example B){
   int temp=A.a;
   A.a=B.a;
   B.a=temp;
   cout<<A.a<<B.a;


}

int main(){
    Example E1,E2;
    E1.getData(1);
    E2.getData(3);
    E1.Swap(E1,E2);
    return 0;
    
}