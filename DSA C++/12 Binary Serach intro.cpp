#include<iostream>
using namespace std;

int BinarySearch1(int arr[], int size, int key) {
	int start = 0;
	int end = size-1;
	int mid = start+((end-start)/2);
	while(start<=end) {
		if(arr[mid] == key ) {
			return mid;
		} 
		if(key > arr[mid]) {	//Right Parth ma Javu (in Short Key Big )
			start = mid + 1;
		}else{
			end = mid - 1;
		}
		mid = start+((end-start)/2);
	}
	return -1;
}

int main()
{
	int even[6] = {2,4,6,8,12,18};
	int odd[5] = {3,8,11,14,16};	
	int index = BinarySearch1(even,6,12);
	cout<<" Index Of 12 is "<< index << endl;
	index = BinarySearch1(odd,5,3);
	cout<<" Index Of 3 is "<< index << endl;
	return 0;
}
