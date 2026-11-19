#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    int a[n];
    cout<<"Enter elements of the array: ";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            
            if(a[j+1]>a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"Sorted Array: ";

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}