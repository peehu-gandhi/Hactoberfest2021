// Seletion Sort == Find the minimum element in unsorted array and swap it with element at the begining

#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];


    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }


    return 0;  
}  


// Brain Teaser:-

// 15 rupees 1rupee == 1 chocolate && 3wrappers == 1chocolate
// 15 == 15 chocolates
// 15 wrapppers = 5 chocolates
// 3 wrappers == 1 chocolate
// (1 + 2) wrappers == 1 chocolate
// Total chocolates == (15+5+1+1) == 22 chocolates