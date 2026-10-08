#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20]="Programming";
    char s2[30]="t";

    if(strstr(s1,s2)!=NULL){
        cout<<strstr(s1,s2)<<endl;
    }

    else{
      cout<<"Not Found";
    }
    
    return 0;
}