#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Array elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n-2;i++){
        int min=i;

        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

    cout<<"Sorted Array: ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
