#include<iostream>
using namespace std;

void printarr(int arr[], int size) {
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swapAtternate(int arr[], int size) {
	for(int i = 0; i < size ; i+=2) {
		int temp=0;
		if((i+1) < size) {
			//swap(arr[i],arr[i+1]);	//vaild
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}
}

int findunique(int arr[], int size) {
	int ans=0;
	for(int i=0; i<size; i++) 
	{
		ans = ans ^ arr[i];	
	}	
	return ans;
}

int findDuplicate(int arr[], int size) {
	int ans=0;
	for(int i=0;i<size;i++) {
		ans = ans ^ arr[i];
	}
	for (int i=0;i<size;i++) {
		ans = ans ^ i;
	}
	return ans;
}

//void findarrintersection(int arr1[], int arr2[], int n, int m) {
//	vector<int> ans;
//	for(int i=0; i<n; i++) {
//		int element = arr1[i];
//		for(int j=0; j<m; j++) {
//			if(element == arr2) {
//				ans.push_back(element);
//				arr2[j] = -56757;
//				break;
//			}
//		}
//	}
//}

int main()
{
	// 1. Swap Atternate Array :
	/*int even[8] = {1,2,3,4,5,6,7,8};
	int odd[5] = {1,2,3,4,5};
	swapAtternate(even,8);
	printarr(even,8);
	swapAtternate(odd,5);
	printarr(odd,5);*/
	
	// 2. Find Unique Element in Array :
	/*int arr1[5] = {1,3,4,1,3};
	cout<<findunique(arr1,5)<<endl;*/
	
	// 3. Find Duplicate :
	/*int arr[6] = {1,1,2,8,9,6}; 
	cout<<findDuplicate(arr,6)<<endl;*/
	
	// 4. Intersection in array :
	/*int arr1[3] = {1,2,3};
	int arr2[2] = {3,4};
	cout<<findarrintersection(arr1,arr2,3,3)<<endl;*/

	return 0;
}
