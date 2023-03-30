#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
	cout << "Source : " << src << "    Destination : " << dest << endl;
	//base case
	if(src==dest) {
		cout << "Aavi Gayu Ghere" << endl;
		return ;
	}
	// R.R
	src++;
	reachHome(src, dest);	
}

int fib(int n) {
	// base case
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	// R.R
	return fib(n-1) + fib(n-2);
}

int countDistanctToStair(int n) {
	// base case
	if(n < 0) 
		return 0;
	if(n==0) 
		return 1;
	//R.R
	return countDistanctToStair(n-1) + countDistanctToStair(n-2);
}

void saydigit(int n, string arr[]) {
	// base case
	if(n==0)
		return ;
	// Processing Part
	int digit = n % 10;
	n = n / 10;
	saydigit(n, arr);
	cout << arr[digit] << " ";
}

int main()
{
	/*int dest = 10;
	int src = 1;
	reachHome(src, dest);*/
	
	/*int n;
	cout << "Enter The n terms Of Fibonnacci Series : " << endl;
	cin >> n;
	int ans = fib(n);
	cout << ans;*/

	/*int n;
	cout << "count Distanct Way To Stair That Enter n Term Of Stair : " << endl;
	cin >> n;
	int ans = countDistanctToStair(n);
	cout << "Ans : " << ans << endl;*/
	
	cout << " ************************* Integer To Convert String ************************" << endl;
	int n;
	cout << "Enter The Number : " << endl;
	cin >> n;
	string arr[10] = {"zero","one","two","three","four","four","six","seven","eight","nine"};
	saydigit(n, arr);
	cout << endl;




	
	return 0;	
}
