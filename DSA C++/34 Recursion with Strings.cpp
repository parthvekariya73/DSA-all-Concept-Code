#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {	// refernce variable that output is true
	cout << "Call recieved for : " << str << endl;
	// base case
	if(i>j)
		return ;
	swap(str[i], str[j]);
	i++;
	j--;
	reverse(str, i, j);
}

bool cheackpalindrome(string& str, int i, int j) {
	// base case
	if(i>j)
		return true;
	if(str[i] != str[j]) {
		return false;
	}else{
		return cheackpalindrome(str, i+1, j-1);
	}
}

int power(int a, int b) {
	cout << "a is " << a << "  b is " << b << endl;
	// base case
	if(b==0)
		return 1;
	if(b==1)
		return a;
	// R.R
	int ans = power(a, b/2);
	// if b is even 
	if(b%2 == 0) {
		return ans * ans;
	}else{
		//if b is odd
		return a * ans * ans;
	}
}

void bubblesortrecursion(int *arr, int n) {
	// base case-already sort
	if(n == 0 || n == 1) 
		return;
	for(int i=0; i<n-1; i++) {
		if(arr[i] > arr[i+1]) {
			swap(arr[i], arr[i+1]);
		}
	}
	bubblesortrecursion(arr, n-1);
}

int main()
{
//	Reverse String :
	/*string name = "parth";
	reverse(name, 0, name.length()-1);
	cout << name << endl;*/
	
//	Cheak Palindrome :
	/*string name = "abcba";
	bool isPalindrome = cheackpalindrome(name, 0, name.length()-1);
	cout << name << endl;
	if(isPalindrome) 
		cout << "it is Palindrome.." << endl;
	else
		cout << "it is not palindrome.." << endl;*/
	
//	n power
	/*int a,b;
	cout << "Enter Number : ";
	cin >> a;
	cout << "Enter Power : ";
	cin >> b;
	int ans = power(a,b);
	cout << "Answer is : " << ans << endl;*/
	
//	Bubble sort recursion :
	/*int arr[5] = {2,5,1,6,9};
	bubblesortrecursion(arr, 5);
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}*/

	
	return 0;
}
