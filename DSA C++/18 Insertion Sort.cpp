#include<iostream>
using namespace std;

int main()
{
	int arr[7] = {10,1,7,4,8,2,11};
	int n = 7;
	
	for(int i=0; i<n; i++) {	//round i
	int temp = arr[i];
	int j=i-1;
		for(; i>=0; j--) {
			if(arr[j] > temp) {	//shift
				arr[j+1] = arr[j];
			}else{
				break;
			}
		}
		arr[j+1] = temp;
	}
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
