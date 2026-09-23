#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int Partition(vector<int>A, int low, int high){
    int i=low;
    int j=high+1;
    int pivot=A[low];

    do{
        do{
            i++;
        } while(A[i]<pivot);

        do{
            j--;
        } while(A[j]>pivot);

        if(i<j){
            int temp=A[i];
            A[i]=A[j];
            A[j]=A[i];
        }
    } while(i<j);

    int swap=A[j];
    A[j]=A[low];
    A[low]=swap;

    return j;

}


int QuickSort(vector<int>A, int low, int high){
    if(low<high){
        j=Partition()
    }
}




