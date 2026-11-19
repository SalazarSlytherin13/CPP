#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int Partition(vector<int>A, int low, int high){
    int i=low;
    int j=high;
    int pivot=A[low];
    
    while(i<j){
        if(A[i]<=A[pivot] && i<=high-1){
            i++;
        }


    }


}


int QuickSort(vector<int>A, int low, int high){
    if(low<high){
        j=Partition()
    }
}




