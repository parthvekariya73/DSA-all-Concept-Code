#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n) {
	if(n<=1) 
		return false;
	
	for(int i=2; i<n; i++) {
		if(n % i== 0) {
			return false;
		}
	}
	return true;
}

int CountPrime(int n) {
	int count = 0;
	for(int i=2; i<n; i++) {
		if(isPrime(i))
			count ++;
	}
	return count;
}

int SieveofEratheres(int n) {
	int count = 0;
	vector<bool> prime(n+1, true);
	prime[0] = prime[1] = false;
	for(int i=2; i<n; i++) {
		if(prime[i]){
			count++;
			for(int j=2*i; j<n; j=j+i) {
				prime[j] = 0;
			}			
		}
	}
	return count;
}

int gcd(int a, int b) {
	if(a==0)
	return b;
	
	if(b==0)
	return a;
	
	while(a != b) {
		if(a>b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}

int modular_Exponentiation(int x, int n, int m) {
	int result = 1;
	while(n>0) {
		if(n & 1) {
			// Odd
			result = ( 1LL * (result) * (x)%m)%m;
		}
		x = (1LL * (x)%m * (x)%m)%m;
		n = n>>1;
	}
	return result;
}

int main()
{
//	Prime Number :
	//int n;
	//cout << "Enter Number : ";
	//cin >> n;
	
	/*if(isPrime(n)) {
		cout << "It Is Prime Number..." << endl;
	}else{
		cout << "It Is Not Prime Number..." << endl;
	}*/
		
//	Count Prime :
	//cout << "Count Prime Number : " << CountPrime(n) << endl;

//	Sieve Of Eratheres :
	//cout << "Count Prime Number : " << SieveofEratheres(n) << endl;	
	
//	GCD/HCF :
	//int a, b;
	//cout << "Enter TheValue Of a and b : " << endl;
	//cin >> a >> b;
	//int ans = gcd(a, b);
	//cout << "The GCD Of " << a << " & " << " is : " << ans << endl;
	
//	Modulo Arithmetic :
	cout << "Modulo Arithmetic is : " << modular_Exponentiation(2, 5, 2) << endl;
	
	
	
	
	
	
	
	
	return 0;
}
