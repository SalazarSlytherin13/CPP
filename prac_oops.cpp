//scope resolution operator

// #include<iostream>
// using namespace std;

// int a=20;

// int main(){
//     int a=10;
//     cout<<a<<endl;
//     cout<<::a<<endl;
// }

//namespaces




//static member definition

// #include<iostream>
// using namespace std;

// class Test{
//     public:
//     static int count;
// };

// int Test::count=10;

// int main(){
//     cout<<Test::count;
// }


//function overloading


// #include<iostream>
// using namespace std;

// void sum();

// int sum(int, int );


// void sum(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"The sum is: "<<a+b<<endl;
// }

// int sum(int x, int y){
//     int a,b,s;
//     a=x;
//     b=y;
//     s=a+b;
//     return s;
// }


// int main(){
//     int n1,n2;
//     cout<<"Enter the numbers: ";
//     cin>>n1>>n2;

//     cout<<"The second sum: "<<sum(n1,n2)<<endl;

//     sum();


// }


// class 


#include<iostream>
using namespace std;

namespace VeryLongAns{
    int a=122;
}

namespace VLA = VeryLongAns;

int main(){
    cout<<VLA::a;
}