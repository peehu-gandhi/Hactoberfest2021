#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

void unionOfArrays(int arr1[], int arr2[], int n1, int n2){
    int i=0,j=0;
    while(i < n1 && j < n2){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i < n1){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j < n2){
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){

    int n1,n2;
    cout<<"Enter size of array-1 : ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter array-1 elements : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of array-2 : ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter array-2 elements : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    /*
        arr1[] = {1 3 4 5 6 7}
        arr2[] = {2 4 8 9}
    */
    unionOfArrays(arr1,arr2,n1,n2);
    return 0;
}