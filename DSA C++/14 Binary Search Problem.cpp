#include<iostream>
using namespace std;

int getPivot(int arr[], int size) {
	int s =0;
	int e = size - 1;
	int mid = s + (e-s)/2;
	while(s<e) {
		if(arr[mid] >= arr[0]) {
			s = mid + 1;
		}else{
			e = mid;
		}
		mid = s + (e-s)/2;
	}	
	return s;
}

int BinarySearch1(int arr[], int s, int e, int key) {
	int start = s;
	int end = e;
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

int FindPositon(int arr[], int n, int k) {
	int pivot = getPivot(arr,n);
	if(k >= arr[pivot] && k <= arr[n-1]) { // 2 line Binarysearch
		return BinarySearch1(arr, pivot, n-1, k);
	}else{	// 1 line Bianrysearch
		return BinarySearch1(arr, 0, pivot-1, k);
	}
}

long long int mySqrtint(int n) {
	int s = 0;
	int e = n-1;
	long long int mid = s + (e-s)/2;
	long long int ans = -1;
	while(s<=e) {
		long long int square = mid*mid;
		if(square == n){
			return mid;
		}
		if(square < n) {
			ans = mid;
			s = mid + 1;
		}else{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

double morePrecision(int n, int precision, int temp) {
	double factor =1;
	double ans = temp;
	for(int i=0; i<precision; i++) {
		factor = factor/10;		//0.1   0.01   0.001
		for(double j=ans; j*j<n; j=j+factor) {
			ans = j;
		}
	}
	return ans;
}

int main()
{
	int arr[5] = {7,9,1,2,3};
//	cout<<"Pivot is "<<getPivot(arr,5) <<endl;
//	cout<< FindPositon(arr,5,2)<<endl;
//	cout<< mySqrtint(36)<<endl;
	int n;
	cout<<"Enter The Number : "<<endl;
	cin>>n;
	int tempsol = mySqrtint(n);
	cout<<"Answer is "<< morePrecision(n,3,tempsol)<<endl;
	return 0;
}
