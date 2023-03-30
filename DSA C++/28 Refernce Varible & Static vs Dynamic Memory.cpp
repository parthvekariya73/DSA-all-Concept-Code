#include<iostream>
using namespace std;

void update(int n) {
	n++;
}

void update2(int& n) {
//	int& n as Referance Variable..
	n++;
}

// Bad practic :-
/*int& func(int a) {
	int num = a;
	int& ans = num;
	return ans;
}
int* fun(int n) {
	int* ptr = n;
	return ptr;
}*/

int getsum(int *arr, int n) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i];
	}
	return sum;
}

int main()
{
//	normal Variable
	/*int i = 5;
//	referance Variable
	int& j = i;
	
	cout << i << endl;
	i++;
	cout << i << endl;	
	j++;
	cout << i << endl;
	cout << j << endl;*/
	
//	why referance Varible use?
	/*int n = 5;
	cout << "Before : " << n << endl;		// 5
	update2(n);
	cout << "After : " << n << endl;		// 6
	*/
	
//	Static momery :-
	/*char ch = 'p';
	cout << sizeof(ch) << " Byte" << endl;		// 1
	char* c = &ch;
	cout << sizeof(c) << " Byte" << endl;		// 8
	*/
	
//	Heap Memory
//	Dynamic Memory :-
//  Array memory :-
	//int* arr = new int[5];
//	input memory size in Array :-
	int n;
	cout << "Enter Array Size : ";
	cin >> n;
	int* arr = new int[n];
	//array input
	cout << "Input The Array : " << endl;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int ans = getsum(arr, n);
	cout << "Sum : " << ans << endl;
	
	delete []arr;

//	Lab PC Try
//	full on danger chige
//  not try++
//	Full Danger :-
	/*while(true) {
		int* ptr = new int;
	}*/
	
	
	
	return 0;
}
