#include<iostream>
using namespace std;

namespace first{
    int a=10;
}

namespace second{
    double x=3.5;
}

using namespace first;
using namespace second; //does not work for multiple namespaces with same variable , :: approach is better

int main(){
  cout<<a<<" "<<x;
}