#include<iostream>
using namespace std;

class Student{
    int rollNo;
    public:
       Student(int rollNo){
        this->rollNo;
       }
       void display();
};

void Student::display(){
    cout<<rollNo<<endl;
}

int main(){
    Student S1(63);
    S1.display();
}