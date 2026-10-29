#include<iostream>
using namespace std;

class Sum{
    int a,b;

    public:
     void getData(int,int);
     int printSum();

};

void Sum::getData(int x, int y ){
    a=x;
    b=y;
    
}

int Sum::printSum(){
  return a+b;

}

int main(){
    Sum S;
    int n1, n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    S.getData(n1,n2);
    int res=S.printSum();
    cout<<res;



    return 0;
}