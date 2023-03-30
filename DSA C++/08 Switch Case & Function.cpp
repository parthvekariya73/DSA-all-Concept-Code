#include<iostream>
using namespace std;

int power(int a,int b) {
	int ans=1;
	for(int i = 1; i<=b; i++) {
		ans = ans * a;
	}
	return ans;
}

bool isEven(int a) {
	if(a&1) {
		return false;
	}else{
		return true;
	}
}

int Fact(int n) {
	int fact = 1;
	for(int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}

int nCr(int n,int r) {
	int num = Fact(n);
	int denom = Fact(r) * Fact(n-r);
	int ans = num/denom;
	return ans;
}

bool primenum(int n) {
	for(int i=2;i<n;i++) {
		if(n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int AP(int n) {
	int ans = ((3*n)+7);
	return ans;
}

int fibonacci() {
	int n;
	cout<<"Enter Value :";
	cin>>n;
	int a =0,b=1;
	cout<<a<<endl<<b<<endl;
	for(int i=1;i<=n;i++) {
		int nextnumber=a+b;
		cout<<nextnumber<<endl;
		a=b;
		b=nextnumber;
	}
}

int main()
{
	/*int num = 2;
	switch(num) {
		case 1 : cout<<"First"<<endl;
				 break;
		case 2 : cout<<"Second"<<endl;
				 break;
		default : cout<<"invaild"<<endl;
	}*/
	
	// infinite loop in use exit : 
	/*int n=1;
	while(1) {
		switch(n) {
			case 1 : cout<<n<<endl;
			exit(0);
		}
	}*/
	
	// Calculator :
	/*int a,b;
	cout<<"Enter The Value Of A : ";
	cin>>a;
	cout<<"Enter The Value Of B : ";
	cin>>b;
	char op;
	cout<<"Enter The Operation You Want To Perform : ";
	cin>>op;
	switch(op) {
		case '+' :	cout<<(a+b)<<endl;
					break;
		case '-' :	cout<<(a-b)<<endl;
					break;
		case '*' :	cout<<(a*b)<<endl;
					break;
		case '/' :	cout<<(a/b)<<endl;
					break;
		case '%' :	cout<<(a%b)<<endl;
					break;
		default : cout<<"Invaild Input"<<endl;
	}*/
	
	//How Much Notes Count in Amount
	/*int n;
	cout<<"Enter The Amount Of Value : ";
	cin>>n;
	int a ,b ,c ,d;
	a=b=c=d=0;
	switch(n>=100) {
		case 1 : a=n/100;
					n-=a*100;
					cout<<"100 Rupess Ke "<<a<<" Notes"<<endl;
	}
	switch(n>=50) {
		case 1 : b=n/50;
					n-=b*50;
					cout<<"50 Rupess Ke "<<b<<" Notes"<<endl;
	}
	switch(n>=20) {
		case 1 : c=n/20;
					n-=c*20;
					cout<<"20 Rupess Ke "<<c<<" Notes"<<endl;
	}	
	switch(n>=10) {
		case 1 : d=a/10;
					n-=d*10;
					cout<<"10 Rupess Ke "<<d<<" Notes"<<endl;
					break;
	}*/
	
	
	
//Function :
	//Pow func :	
	/*int a,b;
	cin>>a>>b;
	int ans=1;
	for(int i = 1; i<=b; i++) {
		ans = ans * a;
	}
	cout<<ans;*/
	
	//Power Func :
	/*int a,b;
	cin>>a>>b;
	int ans=power(a,b);
	cout<<ans;*/
	
	//isEven Func :
	/*int num;
	cin>>num;
	if(isEven(num)) {
		cout<<"Number is Even"<<endl;
	}else{
		cout<<"Number is Odd"<<endl;
	}*/
	
	//NCR Func :
	/*int n,r;
	cin>>n>>r;
	cout<<"ans is : "<< nCr(n,r) << endl;*/
	
	//Prime Func :
	/*int n;
	cin>>n;
	if(primenum(n)) {
		cout<<"Number is Prime"<<endl;
	}else{
		cout<<"Number is Not Prime"<<endl;
	}*/
	
	//Arithmetic Progressor Func :
	/*int n;
	cin>>n;
	int ans=AP(n);
	cout<<ans<<endl;*/
	
	int ans = fibonacci();
	cout<<ans<<endl;
	
	
	
	
	
	
	
	return 0;
}
