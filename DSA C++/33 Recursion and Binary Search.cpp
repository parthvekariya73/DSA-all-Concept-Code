#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
	// base case
	if(size==0 || size==1) 
		return true;
	// R.R
	if(arr[0] > arr[1]) 
		return false;
	else
		return isSorted(arr+1, size-1);
}

int getsum(int *arr, int size) {
	// base case
	if(size==0)
		return 0;
	if(size==1)
		return arr[0];
	return arr[0] + getsum(arr+1, size-1);
}

void print(int arr[], int size) {
	cout << "Size Of Array is " << size << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}cout << endl;
}

bool Search(int arr[], int size, int key) {
	print(arr, size);
	// base case
	if(size == 0) 
		return false;
	
	if(arr[0] == key) {
		return true;
	}else{
		return Search(arr+1,size-1, key);
	}
}

void BSprint(int *arr, int s, int e) {
	for(int i=s; i<=e; i++) {
		cout << arr[i] << " ";
	}cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k) {
	BSprint(arr, s, e);
	int mid = s + (e-s)/2;
	// base case
	if(s>e)
		return false;		// element not found
	if(arr[mid] == k) 
		return true;		// element found
	//R.R
	if(arr[mid] < k) {
		return binarySearch(arr, mid+1, e, k);
	}else{
		return binarySearch(arr, s, mid-1, k);
	}
}

int main()
{
	/*int arr[5] = {2,4,6,8,9};
	int size = 5;
	bool ans = isSorted(arr, size);
	if(ans) 
		cout << "This Array is Sorted..." << endl;
	else
		cout << "This Array is Not Sorted..." << endl;	*/
	
	/*int arr[5] = {1,2,3,4,5};
	int size = 5;
	int sum = getsum(arr, size);
	cout << "Sum is " << sum << endl;*/
	
	/*
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	int key = 5;
	bool ans = Search(arr, size, key);
	if(ans)
		cout << "Found..." << endl;
	else
		cout << "Not Found..." << endl;
	*/
	
	int arr[6] = {2,4,6,10,14,16};
	int size = 6;
	int key = 16;
	bool ans = binarySearch(arr, 0, size-1, key);
	if(ans)
		cout << "Found..." << endl;
	else
		cout << "Not Found..." << endl;
	
	
	
	return 0;
}
