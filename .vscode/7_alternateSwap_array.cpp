#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0, end=1;
    while(end<=n-1){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start=start+2;
        end=end+2;
    }

    cout<<"Required array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}