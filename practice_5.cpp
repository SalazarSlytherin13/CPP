#include<iostream>
using namespace std;

class Student{  //Student Info display
    int roll;
    string name;
    public:
      void getData(int, string);
      void display();

};

void Student::getData(int r, string n){
    roll=r;
    name=n;
}

void Student::display(){
    cout<<"Name of Student: "<<name<<endl;
    cout<<"Roll No. of Student: "<<roll<<endl;
}

int main(){
    Student S1;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int r1;
        string n1;
        cin>>r1>>n1;

        S1.getData(r1,n1);
        S1.display();
        }
    
    return 0;

}