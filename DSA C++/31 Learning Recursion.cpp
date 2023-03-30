#include<iostream>
using namespace std;

int factorial(int n) {
//	Base Case
	if(n == 0) 
		return 1;
				//int smallerproblem = factorial(n-1);
				//int biggerproblem = n * smallerproblem;
	return  n * factorial(n-1); 
}

int power(int n) {
	// base case
	if(n==0)
		return 1;
	// R.R
					// int smallerproblem = power(n-1);
					// int biggerproblem = 2 * smallerproblem;
	return 2 * power(n-1);
}

int print1(int n) {
	// Base Case
	if(n==0)
		return 1;
	cout << n << " ";
	return print1(n-1);
}

void print2(int n) {
	// Base Case
	if(n==0)
		return ;
	print2(n-1);
	cout << n << " ";
}

int main()
{
	/*int n;
	cout << "Enter The Factorial Number : " << endl;
	cin >> n;
	int ans = factorial(n);
	cout << "Ans : " << ans << endl;*/
	
	/*int n;
	cout << "Enter The Power Of Number : " << endl;
	cin >> n;
	int ans = power(n);
	cout << "Ans : " << ans << endl;*/	
	
	int n;
	cout << "Enter Number : " << endl;
	cin >> n;
	//print1(n);
	print2(n);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
