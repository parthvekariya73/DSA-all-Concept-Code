#include<iostream>
using namespace std;

void print(int *p) {
	cout << *p << endl;
}

void update(int *p) {
	//p = p + 1;
	//cout << "inside : " << p << endl;
	*p = *p + 1;
}

int getsum(int arr[], int n) {
//	int getsum(int *arr, int n) 	--> same method thi write kari sakay
	cout << "Size : " << sizeof(arr) << endl;
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i];
	}
	return sum;
}

int main()
{
//	first index array address :
	/*int arr[5] = {2,3,4,5};
	cout<< "Address of first memory block is : " << arr << endl;	
	cout<< "Address of first memory block is : " << &arr << endl;
	cout<< "Address of first memory block is : " << &arr[0] << endl;*/
	//cout << "    " << *arr << endl;
	
//	array pointer :
	/*cout << "1th : " << *arr << endl;
	cout << "2th : " << *arr+1 << endl;
	cout << "4th : " << *(arr+1) << endl;
	cout << "1th : " << (*arr) +1 << endl;*/
	
// formula = arr[i] = *(arr+i)
	/*int arr[4] = {23,122,41,67};
	cout << "Array : " << arr[2] <<endl;
	cout << "Array : " << *(arr+2) <<endl;*/

// formula = i[arr] = *(i+arr)	
	/*int arr[4] = {23,122,41,67};
	int i = 3;
	cout << "Array : " << i[arr] << endl;
	cout << "Array : " << *(i+arr) <<endl;*/
	
//	1. Differrnces Pointer and array :
	/*int temp[10] = {1,2};
	cout << sizeof(temp) << " Byte"<< endl;
	int *ptr = &temp[0];
	cout << sizeof(ptr) << " Byte"<< endl;
	cout << sizeof(*ptr) << " Byte"<< endl;
	cout << sizeof(&ptr) << " Byte"<< endl;
	cout << sizeof(*temp) << " Byte"<< endl;
	cout << sizeof(&temp) << " Byte"<< endl;*/
	
	/*int a[20] = {1,2,3,5};
	cout << "--> " << &a[0] <<endl;			// compare changed add
	cout << &a << endl;
	cout << a << endl;
	
	int *p = &a[0];
	cout << p <<endl;
	cout << *a << endl;
	cout << "--> " << &p << endl;			// changed
	*/
	
	/*int arr[10];
	cout << arr << endl;
//	arr = arr + 1;		// not possible error
	int *ptr = &arr[10];
	ptr = ptr + 1;
	cout << ptr << endl;*/
	
	/*int arr[5] = {1,2,3,4,5};
	char ch[6] = "abcde";
	
	cout << arr << endl;		// address print
	cout << ch << endl;			// all contain print "abcde"
	
	char *c = &ch[0];			// all contain print "abcde"
	cout << c << endl;*/
	
	/*char temp = 'z';
	char *c = &temp;
	cout << c << endl; */
	
	
//	Function with pointer :
	/*int value = 5;
	int *ptr = &value;
	//print(ptr);
	cout << "Before : " << *ptr << endl;
	update(ptr);
	cout << "After : " << *ptr << endl;
	*/
	
	
	int arr[5] = {1,2,3,4,5};
	cout << "sum is " << getsum(arr,5) << endl;
	cout << "sum is " << getsum(arr+3,2) << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
