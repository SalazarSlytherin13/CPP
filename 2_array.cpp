// Largest element in array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array:"<<"\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: "<<"\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }

    cout<<"Largest no. in array is: "<<max;
    return 0;
}