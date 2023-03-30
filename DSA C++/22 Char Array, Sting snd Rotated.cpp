#include<iostream>
using namespace std;

int getlengthstring(char name[]) {
	int count = 0;
	for(int i=0; name[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void reversstr(char name[], int n) {
	int s=0;
	int e=n-1;
	while(s<e) {
		swap(name[s++], name[e--]);
	}
	cout << "Reverse a String : " << name << endl;
}

char tolower(char ch) {
	if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
		return ch;
	}else{
		char temp = ch - 'A' + 'a';
		return temp;
	}
}

bool checkpalindrome(char str[], int n) {
	int s=0;
	int e=n-1;
	while(s<=e) {
		if(tolower(str[s]) != tolower(str[e])) {
			return false;
		}else{
			s++;
			e--;
		}
	}
	return true;
}

bool vaildCh(char ch) {
	if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
		return true;
	}
	return false;
}

bool isVaildPD(string str) {
	// Faltu Char Hatane Hai
	int i=0;
	string temp = "";
	for(int j=0; j<str.length(); j++) {
		if(vaildCh( str[j] ))	{
			temp.push_back(str[j]);
		}
	}
	// Convert to Lowercase :
	for(int j=0; j<temp.length(); j++) {
		temp[j] = tolower( temp[j] );
	}
	// Cheak Charcater :
	int s=0;
	int e=str.length()-1;
	while(s<=e) {
		if(str[s] != str[e]) {
			return false;
		}else{
			s++;
			e--;
		}
	}
	return true;
}

char GetMaxOccchar(string s) {
	int arr[26] = {0};
	for (int i=0; i<s.length(); i++) {
		char ch = s[i];
		// lowerCase :
		int number = 0;
		if(ch >= 'a' && ch <= 'z') {
			number = ch - 'a';
		}else{	//Uppercase
			number = ch - 'A';
		}
		arr[number]++;
	}	
	// Maximum Occ :
	int ans = 0;
	int maxi = -1;
	for(int i=0; i<26; i++) {
		if(maxi < arr[i]) {
			ans = i;
			maxi = arr[i]; 
		}
	}
	char finalans = 'a' + ans;
	return finalans;
}

int main()
{
//	char name[20];
//	cout<< "Enter Your Name :" << endl;
//	cin>>name;
	
//	1. String Length :
//	cout<<"Your Name is "<<name<<endl;
//	int n = getlengthstring(name);
//	cout << "Length : " << n << endl;

//	1. Reverse a String :
//	reversstr(name,n);
	
//	2. Check Palindrome :
//	bool cp = checkpalindrome(name,n);
//	cout << "Palindrome or Not : " << cp <<endl;
	
	/*--> Meta Function (to lower)
	cout << "Character is " << tolower('b') << endl;
	cout << "Character is " << tolower('M') << endl;*/

/*--> String Decleartion :
	char str[6] = {'a','b','\0','c','d','\0'};		// Space Not Print And '\0' To End String That Print 'ab'
	cout << str << endl;
	
	string st = "hello world";		// Space Print True
	cout<< st << endl;
	
	string st = "hel\0lo";		// '\0' That Stop Print And Print Only 'hel'
	cout<< st << endl;	*/
 	
// 	3. Vaild Palindrome :
/*	string str;
	cout << "Enter The String : ";
	cin >> str;
	cout << "It Is a Vaild Palindrome Or Not : " << isVaildPD(str) <<endl;	*/
 	
// 	5. Maximum Occuring Character :
	string str;
	cout << "Enter The String : ";
	cin >> str;
	cout << "It Is a Maximum Occuring Character : " << GetMaxOccchar(str) <<endl;
	


 	
 	
 	
 	
 	
	return 0;
}
