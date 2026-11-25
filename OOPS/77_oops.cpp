#include<iostream>
using namespace std;

class Test{
    public:
      Test(){
        cout<<"Object Created" <<endl;    
       }

      ~Test(){
        cout<<"Object Destroyed"<<endl;
      }
};

int main(){
    Test *ptr=new Test[3];
    delete ptr;
}