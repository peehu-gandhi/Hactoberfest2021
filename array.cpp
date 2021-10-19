#include<iostream>
using namespace std;
int main() {
	int x,i,y,s,j, n,element,pos,temp;
	cout << "Enter the number of elements:" << "\n";
	cin >>n;

	int *arr = new int[n];
	cout << "Enter " << n << " elements " << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout<<endl;

        cout<<"enter element";
        cout<<endl;
        cout<<"enter pos"<<endl;
        cin>>element>>pos;
	for(i=pos-1,j=0;i<n,j<=n-pos;i++,j++)
    {
        arr[n-j]=arr[n-j-1];

    }
    arr[pos-1]=element;
	cout << "You entered: ";
	for (x = 0; x < n+1; x++)
    {
		cout << arr[x] << " ";
	}
     cout<<endl;

	cout<<"enter the position of element you want to delete"<<endl;
	cin>>pos;
	for(i=pos-1;i<n+1;i++)
    {

        temp=arr[i+1];
        arr[i]=temp;

    }
    cout<<"The array after deletion"<<endl;
    for (x = 0; x < n; x++)
    {
		cout << arr[x] << " ";
	}
	delete[]arr;


	return 0;
}