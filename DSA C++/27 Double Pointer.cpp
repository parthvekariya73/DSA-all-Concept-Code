#include<iostream>
using namespace std;

void update(int **p) {
//	1.
	//p = p + 1;		//--> No
//	2.
	//*p = *p + 1;
//	3.
	**p = **p + 1;
}

int main()
{
	
	/*int i = 5;
	int *p = &i;
	int **p2 = &p;*/
	
	/*cout << "Printing Pointer : " << p << endl;
	cout << "Printing Doubble Pointer : " << *p2 << endl;
	cout << "Printing Doubble Pointer : " << p2 << endl;*/
	
//	Printing Value :
	/*cout << "i : " << i << endl;
	cout << "*p : " <<  *p << endl;
	cout << "**p2 : " <<  **p2 << endl;*/
	
//	Printing i Address :
	/*cout << "i address : " << &i << endl;
	cout << "*p address : " <<  p << endl;
	cout << "**p2 address : " <<  *p2 << endl;*/
	
	/*cout << &p << endl;
	cout << p2 << endl;*/
	
//	Update Function :
	/*cout << "Before : " << i << endl;
	cout << "Before : " << p << endl;
	cout << "Before : " << p2 << endl;
	update(p2);
	cout << "After : " << i << endl;
	cout << "After : " << p << endl;
	cout << "After : " << p2 << endl;*/

//	MCQ :
//	1.
	/*int first = 8;
	int second = 10;
	int *ptr = &second;
	*ptr = 9;
	cout << first << " " << second << endl;*/
	
//	2.
	/*int first = 6;
	int *p = &first;
	int *q = p;
	(*q)++;
	cout << first << endl;*/

//	3.
	/*int first = 8;
	int *p = &first;
	cout << (*p)++ << " ";		// use than incress
	cout << first << endl;*/
	
//	4.
	/*int *p = 0;
	int first = 110;
	*p = first;
	cout << *p << endl;*/
	
//	5.
	/*int first = 8;
	int second = 11;
	int *third = &second;	// 11
	first = *third;			// 11
	*third = *third + 2;	// 13
	cout << first << " " << second << endl;*/		// 11, 13
	
//	6.
	/*float f = 12.5;
	float p = 21.5;
	float *ptr = &f;	// 12.5
	(*ptr)++;			// 13.5
	*ptr = p;			// 21.5
	cout << *ptr << " " << f << " " << p << endl;*/		// 3 vaar --> 21.3 

// 7.
	/*int arr[5];		// size 20
	int *ptr;		// size 8
	cout << sizeof(arr) << " " << sizeof(ptr) << endl;*/
	
// 8. 
	/*int arr[] = {11, 12, 13, 14};
	cout << *(arr) << " " << *(arr+1) << endl;*/		// 11, 12
	
// 9.
	/*int arr[6] = {11, 12, 13};
	cout << arr << " " << &arr << endl;*/
	
// 10.
	/*int arr[6] = {11, 12, 13};
	cout << arr << " " << (arr+1) << endl;*/
	
// 11.
	/*int arr[6] = {11, 12, 13};
	int *p = arr;
	cout << p[2] << endl;*/
	
	
	
	
	
	
	return 0;
}
