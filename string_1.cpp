#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //1) string name{};
    // cout<<"My name is: "<<name<<"\n";    Creating and displaying an empty string
    
    
    //2) string name{"Alex"};
    // cout<<name<<"\n";
    
    // name="John";                         Replacing an entire string 
    // cout<<name<<"\n";
    

    //3) string name{"Alex"};
    // cout<<name<<"\n";
 
    // name="Jensen";
    // cout<<name<<"\n";
    
    // name="Jim";
    // cout<<name<<"\n";


//   4) cout<<"Enter your name: ";
//    string name{};
//    cin>>name;

//    cout<<"Enter your favourite color: ";
//    string color{};
//    cin>>color;

//    cout<<"My name is "<<name<<" and my favourite color is "<<color<<"\n";


    cout<<"Enter your name: ";
    string name{};
    getline(cin,name);

    cout<<"Enter your favourite food:  ";
    string food{};
    getline(cin,food);

    cout<<"My name is "<<name<<" and my favourite food is "<<food<<"\n";


    return 0;
}