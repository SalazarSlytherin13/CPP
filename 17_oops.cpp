#include<iostream>
using namespace std;

class Example{
    static int n;
    public: 
      static void display();
};

int Example::n=10;

void Example::display(){
    cout<<n;
}

int main(){
   Example::display();
}


// class Example{
//     static int n;
//     public:
//       void display();
// };

// int Example::n=10;

// void Example::display(){
//     cout<<n;
// }

// int main(){
//     Example E1;
//     E1.display();
// }


// class Example{
//     static int n;
//     int a;

//     public: 
//        static void display();
//        void geta(int);
// };

// void Example::geta(int x){
//     a=x;
// }

// void Example::display(){
//      cout<<a;
// }

// int main(){
//     Example E1;
//     E1.geta(12);
//     Example::display();

// }
