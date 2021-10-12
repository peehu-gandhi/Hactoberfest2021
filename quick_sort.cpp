// QUICK SORT

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int *temp = a;
    a=b; 
    b=temp;
}

int partition(int arr[], int low, int high){
    int i=low-1;
    int pivot = arr[high];
    for(int j=low; j<=high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int m = partition(arr,low,high);
        quickSort(arr,low,m-1);
        quickSort(arr,m+1,high);
    }
}

void printArray(int arr[], int low, int high){
    for(int i=low; i<=high; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 8, 58, 96, 60, 0, 10, 5, 19, 22};
    quickSort(arr,0,9);
    printArray(arr,0,9);
}

