#include<iostream>
using namespace std;

int sum(int arr[], int n){
    if(n==-1){
        return 0;
    }
    else if(n>=0){
        return arr[n]+sum(arr[],n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"The sum of elements of an array is: "<<sum(a[],n);
    return 0;
}