#include<iostream>
#include<vector>
using namespace std;

void Dec_bin(int n){
       
        
    while(n/2>=0){
        int x=n%2;
        Dec_bin(n/2);
        cout<<x<<" ";
        n=n/2;

    }
}

int main(){
    Dec_bin(0);
}