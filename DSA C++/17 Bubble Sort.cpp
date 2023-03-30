#include<iostream>
using namespace std;
int main()
{
	int arr[6] = {10,1,7,6,14,9};
	int n = 6;
	bool swapped = false;
	//Bubble sort
	for(int i=0; i<n; i++) {	//for round i to n-1
		for(int j=0; j<n-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j] , arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false) {	// already sorted
			break;
		}
	}
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
