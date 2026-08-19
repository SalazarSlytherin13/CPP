#include<iostream>
using namespace std;

namespace veryLongNamespace{
    int a=10;
}

namespace vln = veryLongNamespace;

int main(){
    cout<<vln::a;
}