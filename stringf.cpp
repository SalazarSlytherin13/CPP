#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[100]="Good ";
    char s1[100]="Evening";

    // cout<<strcat(s,s1)<<endl;
    // cout<<strlen(s)<<endl;
    // cout<<strncat(s,s1,3)<<endl;
    // cout<<strlen(s)<<endl;

    cout<<strncpy(s,s1,4)<<endl;
    cout<<strlen(s)<<endl;
    cout<<strlen(s1)<<endl;
    return 0;


}