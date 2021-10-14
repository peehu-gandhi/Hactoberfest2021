#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b)
{
	int temp=*a;
*a=*b;
*b=temp;
}
int partition(int arr[],int l,int r)
{
	int pivot=arr[l];
	int i=l;
	int j=r;
	while(j>i)
	{
		while(arr[i]<=pivot)
			i++;
		while(arr[j]>pivot)
			j--;
		if(i<j)
			swap(&arr[i],&arr[j]);
	}
	swap(&arr[j],&arr[l]);

	return j;
}
void quicksort(int arr[],int l,int r)
{
if(l<r)
{
	int pi=partition(arr,l,r);
	quicksort(arr,l,pi-1);
	quicksort(arr,pi+1,r);
}
}
void printarray(int arr[],int size)
{
for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";

cout<<endl;
}
int main()
{
	int arr[]={4,6,2,5,7,9,1,3};
	int size=sizeof(arr)/sizeof(int);
	quicksort(arr,0,size-1);
	printarray(arr,size);
}
