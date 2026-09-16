#include<iostream>
using namespace std;

void printPat(int y){
    
    for(int i=0;i<y;i++){
        for(int j=0;j<i+1;i++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

int main(){  
    int n;
    cin>>n;
    printPat(n);

    return 0;
}