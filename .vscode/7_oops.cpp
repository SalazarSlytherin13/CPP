#include<iostream>
using namespace std;

class Student{
    int r;
    string name;

    public:
      void getData(int, string);
      void display();

};

void Student::getData(int r1, string n1){
    r=r1;
    name=n1;
}

inline void Student::display(){
    cout<<r<<name;
}

int main(){
    int r2;
    string n2;
    Student S[2];
    for(int i=0;i<2;i++){
        cin>>r2>>n2;
        cout<<"Enter the roll no. and name: ";
        S[i].getData(r2,n2);
        cout<<"\nThe required info is: ";
        S[i].display();
    }

    return 0;
}