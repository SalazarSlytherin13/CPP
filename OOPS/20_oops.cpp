#include<iostream>
using namespace std;

class Bank{
    static int a;
    int b;

    public:
      void getData(int);
      static int sum(int, int);
      
};

int Bank::a=1000;

void Bank::getData(int x){
    b=x;
}

int Bank::sum(int a, int b){
  int s=a+b;
  return s;
}

int main(){
    Bank B1, B2;
    B1.getData(5000);
    B2.getData(10000);
    

    

}