#include<iostream>
#include<math.h>
using namespace std;

int printarr(int arr[],int size) {
	for(int i=0;i<size;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Everything is Fine"<<endl;
	return 0;
}

int getMax(int num[],int n ) {
	int maxi = INT_MIN;
	for(int i=0;i<n;i++) {
		maxi = max(maxi,num[i]);
//		if(num[i] > max) {
//			max = num[i];
//		}
	}
	return maxi;
}

int getMin(int num[],int n ) {
	int mini = INT_MAX;
	for(int i=0;i<n;i++) {
		mini = min(mini,num[i]);
//		if(num[i] < min) {
//			min = num[i];
//		}
	}
	return mini;
}

int update(int arr[], int n) {
	cout<<"inside The Function"<<endl;
	arr[0]=120;
		cout<<printarr(arr,3)<<endl;
	cout<<"Going Back to Main Function"<<endl;
	return 0;
}

int arrsum(int arr[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++)  {
		sum = sum + arr[i];
	}
	return sum;
}

bool search(int arr[], int n, int key) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == key) {
			return 1;
		}
	}
	return 0;
}

int rearr(int arr[], int n) {
	int start = 0;
	int end = (n - 1);
	while(start <= end) {
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	return printarr(arr,n);
}

int main()
{
	/*int abc[3]={6,3,8};
	for(int i=0;i<3;i++) {
		cout<<abc[i]<<endl;
	}*/
	
	/*int a[15] = {6,2};
	int n = 15;
	for(int i=0;i<n;i++) {
		cout<<a[i]<<endl;
	}*/
	
	/*int four[10] = {0};
	int n = 10;
	for(int i=0;i<n;i++) {
		cout<<four[i]<<endl;
	}*/
	
	/*int five[10] = {1};
	int n = 10;
	for(int i=0;i<n;i++) {
		cout<<five[i]<<endl;
	}*/
	
	/*int six[10];
	int n = 10;
	for(int i=0;i<n;i++) {
		six[i]={1};
		cout<<six[i]<<endl;
	}*/
	
	//Print array With Function :
	/*int abc[3]={1111,111,11}; 
	int arr = printarr(abc,3);
	cout<<arr<<endl;*/
	
	// String Array :
	/*char ch[5] = {'p','a','r','t','h'};
		for(int i=0;i<5;i++) {
		cout<<ch[i];
	}
	cout<<endl<<"Everything is Fine"<<endl;*/
	
	
	// Max and Min Function :
	/*int size;
	cin>>size;
	int num[15];
	for(int i = 0;i<size;i++) {
		cin>>num[i];
	}
	cout<<"Maximum Value is "<<getMax(num,size)<<endl;
	cout<<"Minimum Value is "<<getMin(num,size)<<endl;*/
	
	// Update Function With Array :
	/*int arr[3] = {1,2,3};
	cout<<update(arr,3)<<endl;
	cout<<arr[0]<<endl;*/
	
	//Sum Of Array Function :
	/*int size;
	cin>>size;
	int num[15];
	for(int i = 0;i<size;i++) {
		cin>>num[i];
	}
	cout<<"Array Of Sum = "<<arrsum(num,size)<<endl;*/
	
	
	//Linear Search :
	/*int arr[10] = {5,7,-2,3,5,7,3,1,-78,5};
	cout<<"Enter The Element To Search For "<<endl;
	int key;
	cin>>key;
	bool found = search(arr, 10, key);
	if(found) {
		cout<<"Key is Present"<<endl;
	}else{
		cout<<"Key is Not Present"<<endl;
	}*/
	
	//Reverse Array :
	int arr[6];
	int size = 6;
	cout<<"Enter The Array :";
	for(int i = 0;i<size;i++) {
		cin>>arr[i];
	}
	rearr(arr,size);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
