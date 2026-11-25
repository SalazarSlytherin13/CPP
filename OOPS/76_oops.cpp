#include<iostream>
using namespace std;

class Test{
    public:
      Test(){
        cout<<"Constructor Called" <<endl;    
       }

      ~Test(){
        cout<<"Destructor Called"<<endl;
      }
};

int main(){
    Test *ptr=new Test;
    delete ptr;
}