#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    static int count;
    public:
       Student(int, string);
       void display();
       static void show();
};

Student::Student(int x, string y){
    roll=x;
    name=y;
}

void Student::display(){
    cout<<"Name: "<<name<<" Roll No.: "<<roll<<endl;
}

void Student::show(){
    cout<<count;
}

int main(){
    int r1,r2,r3;
    string s1,s2,s3;

}