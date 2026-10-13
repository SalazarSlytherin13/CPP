#include<iostream>
using namespace std;

namespace veryLongNamespace{
    int a=34;
    void show(){
        cout<<"Quite long namespace!"<<endl;
    }
}

namespace vln=veryLongNamespace;

int main(){
    cout<<vln::a<<endl;
    vln::show();
}