#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
   
    cout<<"Parent process created"<<"\n";
    cout<<"Child process creating...."<<"\n";

    system("mspaint.exe");

    cout<<"Child process execution completed"<<"\n";
    cout<<"Parent process terminated"<<"\n";

    return 0;
}