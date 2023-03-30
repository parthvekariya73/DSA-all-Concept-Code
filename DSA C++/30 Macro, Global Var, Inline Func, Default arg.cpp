#include<iostream>
#define PI 3.14
using namespace std;

int score = 15;		// Golbal Variable 

void a() {
	score++;
	cout << score << endl;
}

void b() {
	cout << score << endl;
}

void func(int a, int b) {
	a++;
	b++;
	cout << a << " " << b << endl;
}

inline int getmax(int& a, int& b) {
	//Ternery Operator :-
	return (a>b) ? a : b;
} 

void print(int arr[], int n, int start = 0) {
	for(int i=start; i<n; i++) {
		cout << arr[i] << endl;
	}
}

int main()
{
//	Macro :-
	/*int r = 5;
	//double pi = 3.14;
	double area = PI * r * r;
	//PI = PI + 1;									PI Not Change | Not Store
	cout << "area is : " << area << endl;
	*/
	
//	Golbal Variable :-
	/*cout << score << endl;
	a();
	b();*/
	
//	Inline Function :-
	/*int a = 1, b = 2;
	//func(a, b);
	int ans = getmax(a, b); 	
	cout << ans << endl;
	a = a + 3;
	b = b + 1;
	ans = getmax(a, b); 	
	cout << ans << endl;*/
	
//	Default Argument :-
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	//print(arr, size);
	print(arr, size, 2);



	
	
	
	
	
	
	return 0;
}
