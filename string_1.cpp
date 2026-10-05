#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of char array: ";
    cin>>n;

    char s[n];

    cout<<"Enter the string: ";
    cin>>s;

    cout<<"Length of the string: "<<strlen(s)<<endl;

    return 0;
}