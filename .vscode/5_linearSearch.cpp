#include<iostream>
using namespace std;

int Search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
           return i;
        }
    }
  return -1;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int res = Search(arr,n,key);
    
    if(res != -1){
        cout<<"Element is present at index: "<<res;
    }
    else{
        cout<<"Element not present";
    }
    
    return 0;
    
    
}