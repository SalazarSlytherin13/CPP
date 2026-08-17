#include<iostream>
using namespace std;

// class Example{
//     int a,b;

//     public:
//       void getData(){
//         cout<<"Enter the numbers: "<<"\n";
//         cin>>a>>b;
//       }

//       void printData(){
//         cout<<a<<" "<<b;
//       }
// };

// int n=10;

// int main(){
    // Example E;
    // E.getData();
    // E.printData();

//     int n=20;
//     cout<<n<<"\n";
//     cout<<::n<<"\n";
//     return 0;
// }
 
// When the member functions are defined outside the class

class Example{
    int a,b;

    public:
     void getData();
     void printData();

};

class Test{
    int a,b;

    public:

      void getData();
      void printData();
};

void Example:: getData(){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
}

void Example:: printData(){
    cout<<"The numbers are: "<<a<<" "<<b;

}

int main(){
    Example E;
    E.getData();
    E.printData();
    return 0;
}