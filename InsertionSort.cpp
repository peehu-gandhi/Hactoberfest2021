// Program to show insertion sort
// By Kriti Arora
// UIET KURUKSHETRA
// CSE 2020-24

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];//declaration of array
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}//taking array elements as input
	
	for(int i=1;i<n;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}//printing the array in sorted order
	
	return 0;
}
