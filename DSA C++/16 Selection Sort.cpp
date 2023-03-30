#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
	for(int i=0; i<n-1; i++) {	// i = index
		int mini = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[mini]) 
				mini=j;
		}
		swap(arr[mini], arr[i]);
	}
}

int main()
{
	int arr[5] = {64,25,12,22,11};
	SelectionSort(arr,5);
	return 0;
}
