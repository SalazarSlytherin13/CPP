#include<iostream>
using namespace std;

// int main(){
//     char s[100];
//     char s1[100];

//     cout<<"Enter your name: ";
//     cin.get(s,100);
//     cout<<"Welcome "<<s<<endl;

//     cout<<"Enter your city: ";
//     cin.get(s1,100);
//     cout<<"Welcome to "<<s1<<endl;

//     return 0;
// }

int main(){
    char s[100];
    char s1[100];

    cout<<"Enter your name: ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;

    cout<<"Enter you city: ";
    cin.getline(s1,100);
    cout<<"Welcome to "<<s1;

    return 0;
}