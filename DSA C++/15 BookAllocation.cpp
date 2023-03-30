#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

bool isPosssible(int arr[], int n, int m, int mid) {
	int studentcount = 1;
	int pagesum = 0;
	for(int i=0; i<n; i++) {
		if(pagesum + arr[i] <= mid) {
			pagesum += arr[i];
		}else{
			studentcount++;
			if(studentcount > m || arr[i] > mid) {
				return false;
			}
			pagesum = arr[i];
		}
		if(studentcount > m) {
			return false;
		}
	}
	return true;
}

int BookAllocation(int arr[], int n, int m) {
	int s = 0;
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	int ans = -1;
	while(s<=e) {
		if(isPosssible(arr,n,m,mid)) {
			ans = mid;
			e = mid - 1;
		}else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
 	}
 	return ans;
}

bool cowpossible(int arr[],int n, int k, int mid) {
	int cowcount = 1;
	int lastpos = arr[0];
	for(int i=0; i<n; i++) {
		if(arr[i]-lastpos >= mid) {
			cowcount++;
			if(cowcount == k) {
				return true;
			}
			lastpos = arr[i];
		}
	}
	return false;
}

int AggresiveCaws(int arr[], int n, int k) {
	int sorting = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + sorting, greater<int>());
//	sort(arr.start(), arr.end());
	int s = 0;
//	int maxi = -1;
//	for(int i=0; i<n; i++) {
//		maxi = max(maxi, arr[i]);
//	}
//	int e = maxi;
	int e = arr[n-1];
	int ans = -1;
	int mid = s + (e-s)/2;
	while(s<=e) {
		if(cowpossible(arr,n,k,mid)) {
			ans = mid;
			s = mid + 1;
		}else{
			e = mid - 1;
		}
		int mid = s + (e-s)/2;
	}
	return ans;
}

int main()
{
//	int arr[4] = {10,20,30,40};			// 5,5,5,5 --> Painter Partition Problem..
//	cout<<BookAllocation(arr,4,2)<<endl;

	int arr[5] = {4,2,1,3,6};
	cout<<AggresiveCaws(arr,5,2)<<endl;
	
	return 0;
}
