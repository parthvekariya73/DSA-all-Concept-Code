#include<iostream>
using namespace std;



int main()
{
	//int num = 5;
	//cout << num << endl;

//	address of Operator :
	//cout << " Address of num is " << &num << endl;	
	
	/*
	int *ptr = &num;
	cout << "Value is : " << *ptr << endl;	// 5
	cout << "Address is : " << ptr << endl;	// Address print 
	
	double d = 4.2;
	double *ptr2 = &d;
	cout << "Value is : " << *ptr2 << endl;	// 5
	cout << "Address is : " << ptr2 << endl;	// Address print 
	
	cout << " Size of interger is : " << sizeof(num) << endl;
	cout << " Size of interger Pointer is : " << sizeof(ptr) << endl;

	cout << " Size of double is : " << sizeof(d) << endl;
	cout << " Size of double Pointer is : " << sizeof(ptr2) << endl;
	*/	
	
//	pointer to int is created pointing to some garbage address 
	//int *p = 0;
	//cout << *p <<endl;
	
	/*
	int i = 5;
	int *p = 0;		// null
	p = &i;			// intizliztion
	cout << *p << endl;
	cout << p << endl;	
	*/
	
	//int num = 5;
	/*int a = num;
	a++;
	cout << num << endl;*/
	
//	Pointer with can Change Value :
	/*int *p = &num;
	cout << "Before : " << num << endl;
	(*p)++;
	cout << "After : " << num << endl;
	cout << *p << endl;
	
//	Copy an Pointer :
	int *q = p;
	cout << p << " - " << q << endl;
	cout << *p << " - " << *q << endl;
	*/
	
	
//	important Concept :
	int i = 3;
	int *t = &i;
		//cout << *t++ << endl;
	//cout << (*t)++ << endl;		
	*t = *t + 1;
	cout << *t <<endl;
		//t = t + 1;
		//cout << t << endl;
	
	
	
	
	
	
	return 0;
}
