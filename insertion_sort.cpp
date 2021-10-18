#include <stdlib.h>
#include <iostream>
using namespace std;

void insertionSort(int arr[], int length);
void printArray(int array[], int size);

int main()
{
	int array[5] = {5, 1, 6, 2, 4};
	insertionSort(array, 5);
	return 0;
}

void insertionSort(int arr[], int length)
{
	int i=1, j, key;
	while(i<length)
	{
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j])
 		{
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
 		++i;
	}
	cout << "Sorted Array: ";

	printArray(arr, length);
}

void printArray(int array[], int size)
{
 	int j;
	for (j = 0; j < size; j++)
	{
 		cout <<" "<< array[j];
 	}
 	cout << endl;
}

