#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the size of first char array: ";
    cin>>n1;
    
    char s1[n1];
    cout<<"Enter the first string: ";
    cin>>s1;

    cout<<"Enter the size of second char array: ";
    cin>>n2;
    
    char s2[n2];
    cout<<"Enter the second string: ";
    cin>>s2;

    cout<<"Concated string: "<<strncat(s1,s2,4)<<endl;

    return 0;




}