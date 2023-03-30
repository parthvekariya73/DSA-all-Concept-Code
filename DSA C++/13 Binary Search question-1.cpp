#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;
	int mid = s + (e-s)/2;
	int ans=-1;
	while(s<=e) {
		if(arr[mid] == key) {
			ans = mid;
			e = mid - 1;
		}else if(key > arr[mid]) {
			s = mid + 1;
		}else if(key < arr[mid]) {
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	} 
	return ans;
}

int LastOcc(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;
	int mid = s + (e-s)/2;
	int ans=-1;
	while(s<=e) {
		if(arr[mid] == key) {
			ans = mid;
			s = mid + 1;
		}else if(key > arr[mid]) {
			s = mid + 1;
		}else if(key < arr[mid]) {
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	} 
	return ans;
}

int peekIndexMountinArr(int arr[], int size) {
	int s = 0;
	int e = size-1;
	int mid = s + (e-s)/2;
	while(s<e) {
		if(arr[mid] < arr[mid+1]) {
			s = mid+1;
		}else{
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}

int main()
{
//	int odd[8] = {1,2,3,3,3,3,3,5};
//	cout<<"First Occurance at Index is : "<< firstOcc(odd, 8, 3) <<endl;
//	cout<<"Last Occurance at Index is : "<< LastOcc(odd, 8, 3) <<endl;
	
//	pair<int,int> p;
//	p.first = firstOcc(even, n, key);
//	p.second = LastOcc(even, n, key);
	
	int peek[4] = {3,4,5,1};
	cout<<"Peek is "<< peekIndexMountinArr(peek,4)<<endl;
	
	
	return 0;
}
