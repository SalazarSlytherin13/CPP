#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char A[20]="Benjamin";
    char B[30]="Franklin";

    // strcpy(B,A);

    // strncpy(A,B,4);

    strncpy(A,B,4);
    A[4]='\0';

    cout<<A<<" "<<B<<endl;
    return 0;

}