#include<iostream>
#include<vector>
using namespace std;

int ArrRotate(int arr[], int n, int k) {
	
	int temp[n];
	
	for(int i=0; i<n; i++)
	{
		temp[(i+k)%n] = arr[i];
	}
	arr = temp;
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}

int Cheak(int arr[], int n) {
	int count = 0;
	for(int i=0; i<n; i++) {
		if(arr[i-1] > arr[i]) {
			count++;
		}
	}
	if(arr[n-1] > arr[0]) {
		count++;
	}
	return count<=1;
}

int main()
{
//	int arr[5] = {11,12,13,14,15};
//	ArrRotate(arr,5,3);
	
	int arr[5] = {3,4,5,1,2};
	Cheak(arr,5);
	
	for(int i=0; i<5; i++) {
		cout<<arr[i]," ";
	}
	cout<<endl;
	return 0;
}
