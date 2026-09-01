#include<iostream>
#include<cstdarg>
#define n 10
#define square(a) a*a
using namespace std;

// void display(int x=10){  //Default Arguments
//     cout<<x<<"\n";
// }

// int main(){
//     display();
//     display(20);
// }


// void greet(string name="Guest", int age=18){
//     cout<<"name: "<<name<<", age: "<<age<<"\n";
// }

// int main(){
//     greet();
//     greet("Beth", 20);
//     greet("Riya", 34);
// }

int main(){
    cout<<n+1<<"\n";
    int r=125/(square(5));
    cout<<r;
}
