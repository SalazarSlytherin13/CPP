#include<iostream>
using namespace std;

class Example{
    public:
      Example(){
        cout<<"Constructor Called"<<endl;
      }

      ~Example(){
        cout<<"Destructor Called";
      }
};

int main(){
    Example E;
}