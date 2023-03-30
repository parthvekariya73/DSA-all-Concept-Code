#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse( vector<int> v, int m) {
	int s = m + 1;
	int e = v.size()-1;
	while(s<=e) {
		swap(v[s], v[e]);
		s++;
		e--;
	}
	return v;
}

void print(vector<int> v) {
	for(int i=0; i<v.size(); i++) {
		cout<<v[i]<<" ";
	}cout<<endl;
}

int merge(int arr1[], int n, int arr2[] ,int m, int arr3[]) {
	int i=0,j=0;
	int k=0;
	while(i<n && j<m) {
		if(arr1[i] < arr2[j]) {
			arr3[k++] = arr1[i++];
		}else{
			arr3[k++] = arr2[j++];
		}
	}
	while(i<n) {
		arr3[k++] = arr1[i++];
	}
	while(j<m) {
		arr3[k++] = arr2[j++];
	} 
}

void print_arr(int ans[], int n) {
	for(int i=0; i<n; i++) {
		cout<<ans[i]<<" ";
	}cout<<endl;
}

int MergeSortedArr(int arr1[], int n, int arr2[] ,int m) {
//	for(int i=0; i<n; i++) {
//		if(arr1[i] == 0) {
//			for(int j=0; j<m; j++) {
//				arr1[i] = arr2[j];
//			}
//		}
//	}
	int i=0, j=0;
	while(i<n) {
		if(arr1[i] == 0) {
				while(j<m){
					arr1[i] = arr2[j];
					break;
				}
				j++;
		}
		i++;
	}
	
	for(int i=0; i<n; i++) {	//round i
	int temp = arr1[i];
	int j=i-1;
		for(; i>=0; j--) {
			if(arr1[j] > temp) {	//shift
				arr1[j+1] = arr1[j];
			}else{
				break;
			}
		}
		arr1[j+1] = temp;
	}
	
	int *ptr = arr1;
	return *ptr;
}

int MoveZeroes(int arr[], int n) {
	int i=0;
	for(int j=0; j<n; j++) {
		if(arr[j] != 0) {
			swap(arr[j], arr[i]);
			i++;
		}
	}
	int *ptr = arr;
	return *ptr;
}

int main()
{
	// 1. Vector Posistion to Before Reverse Array :
/*	vector<int> v;
	v.push_back(11);
	v.push_back(7);
	v.push_back(3);
	v.push_back(12);
	v.push_back(4);
	vector<int> ans = reverse(v,1);
	print(ans);		*/
	
	// 2. Merge Array :
/*	int arr1[5] = {1,3,5,7,9};
	int arr2[3] = {2,4,6};
	int arr3[8] = {0};
	merge(arr1, 5, arr2, 3, arr3);
	print_arr(arr3, 8);		*/
	
	// 3. Merge Sorted Array 0 place anthor array : 
/*	int arr1[6] = {1,2,3,0,0,0};
	int arr2[3] = {2,5,6};
	MergeSortedArr(arr1, 6, arr2, 3);
	print_arr(arr1,6);		*/
	
	// 4. Move Zeroes:
	int arr[6] = {0,10,3,12,0};
	MoveZeroes(arr,6);
	print_arr(arr,6);
	
	return 0;
}
