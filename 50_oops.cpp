#include<iostream>
using namespace std;

class Faculty{
    int salary, id;
    string name;
    static int count;
    public:
       void getData(int, int, string);
       void show();
       void showCount();
       
};

int Faculty::count=0;

void Faculty::getData(int x, int y, string n){
    salary=x;
    id=y;
    name=n;
}

void Faculty::show(){
    cout<<"Faculty Name: "<<name<<endl;
    cout<<"Faculty Id: "<<id<<endl;
    cout<<"Salary: "<<salary<<endl;
}


void Faculty::showCount(){
    if(salary>=50000){
        count++;
    }
    cout<<count;
}

int main(){
    int s1,id1,s2,id2;
    string n1,n2;
    cout<<"Enter the details: ";
    cin>>s1>>id1>>n1;

    Faculty F1;
    F1.getData(s1,id1,n1);
    F1.show();
    F1.showCount();
   

    Faculty F2;
    F2.getData(s2,id2,n2);
    F2.show();
    F2.showCount();


    
}