#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the string: ";
    cin>>n;

    char *s= new char[n];
    cout<<"Enter the string: ";
    cin.ignore();
    cin.getline(s,n);

    cout<<"Length of the string: "<<strlen(s)<<endl;

    return 0;

}