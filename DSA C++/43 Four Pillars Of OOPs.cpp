#include<iostream>
using namespace std;

	// Encapsulation :-
/*class Student {
	private:
		string name;
		int age;
		int height;
		
	public:
		int getAge() {
			return this -> age;
		}
};*/

	// inheritance :-
/*class Human {
	public:
		int height;
		int weight;
		int age;
	
	int hetAge() {
		return this -> age;
	}
	void setWeight(int w) {
		this -> weight = w;
	}
};

class Male : public Human {
	public:
		string color;
		
	void sleep() {
		cout << "Male Sleeping" << endl;
	}
};*/

// 	Types Of inheritance :-
	// 1. single inheritance =
/*class Animal {
	public :
		int age;
		int weight;
		void speek() {
			cout << "Speeking Bho-Bho.." << endl;
		}
};
class Dog : public Animal{
};*/

	// 2. Multi level inheritance =
	/*class GermanShepher :public Dog {
	};*/
	
	// 3. Multiple inheritance =
	/*class Human1 {
		public:
			string color;
			void print() {
				cout << "print" << endl;
			}
	};
	class Hybrid : public Animal , public Human1 {
	};*/

	// 4. Hierarchical inheritance =
	/*class A {
		public:
			void func1() {
				cout << "Inside Function 1" << endl;
			}
	};
	class B : public A{
		public:
			void func2() {
				cout << "Inside Function 2" << endl;
			}
	};
	class C : public A{
		public:
			void func3() {
				cout << "Inside Function 3" << endl;
			}		
	};*/

	// Hybrid inheritance =
	/*class A1 {
		public:
			void func1() {
				cout << "Inside Function A" << endl;
			}
			void samefunction() {
				cout << "A Function Called" << endl;
			}
	};
	class B1 : public A{
		public:
			void func2() {
				cout << "Inside Function B" << endl;
			}		
	};
	class D1 {
		public:
			void func4() {
				cout << "Inside Function D" << endl;
			}
			void samefunction() {
				cout << "D Function Called" << endl;
			}
	};
	class C1 : public A1, public D1{
		public:
			void func3() {
				cout << "Inside Function C" << endl;
			}		
	};*/
	
//	Polymorphism :-
	// 1. Compile Time Polymorphism =
	/*class A2 {
		public:
			int sayhello(string name, int n) {
				cout << "hello" << n << name << endl;
				return 0;
			}
			void sayhello(string name) {
				cout << "hello" << name <<  endl;
			}
 	};*/
 	/*class B2 {
 		public :
 			int a, b;
 			int add() {
 				return a+b;
			}
			void operator+ (B2 &obj) {
				//int val1 = this -> a;
				//int val2 =  obj.a;
				//cout << "optput " << val2 - val1 << endl;
				cout << "hello world" << endl;
			}
			void operator() () {
				cout << "breaket " << this->a << endl;;
			}
	};*/
	// 2. Run Time Polymorphism =
	class Animal {
		public:
			void speek() {
				cout << "Speeking" << endl;
			}
	};
	class Dog : public Animal {
		public:
			void speek() {
				cout << "bho bho" << endl;
			}
	};
	
	
	
	

int main()
{
	
//	Student first;
	
//	inheritance :-
	//Male object1;
	// To Access inheritance Properties :-
	/* cout << object1.age << endl;
	cout << object1.height << endl;
	cout << object1.weight << endl;	
	cout << object1.color << endl;
	object1.sleep();
	object1.setWeight(48);
	cout << object1.weight << endl;	*/
	
	
// 	Types Of inheritance :-
	// 1. single inheritance =
		/* Dog a;
		a.speek(); */
	
	// 2. Multi level inheritance =
		/* GermanShepher b;
		b.age = 10;
		cout << b.age << endl; */
	
	// 3. Multiple inheritance =
		/* Hybrid obj1;
		obj1.speek();
		obj1.print(); */
		
	// 4. Hierarchical inheritance =
		/* A obj1;
		obj1.func1(); */
	
		/* B obj2;
		obj2.func2();
		obj2.func1(); */
		
		/* C obj3;
		obj3.func3();
		obj3.func1(); */
		
	// Hybrid inheritance =
		/* A1 obj1;
		obj1.func1();
		B1 obj2;
		obj2.func1();
		obj2.func2();
		C1 obj3;
		obj3.func1();
		obj3.func3();
		obj3.func4();
		D1 obj4;
		obj4.func4();
		*/
		
//	inheritance Ambiguity :-
	/* C1 obj1;
	obj1.A1::samefunction();
	obj1.D1::samefunction(); */
	
//	Polymorphism :-
	// 1. Compile Time Polymorphism =
		/* A2 obj;
		obj.sayhello("parth");
		obj.sayhello("parth",4); */ 
		
		/*B2 obj1, obj2;
		obj1.a = 10;
		obj2.a = 20;
		obj1 + obj2;
		obj1.operator()();*/
	// 2. Run Time Polymorphism =
		Dog obj;
		obj.speek();





	return 0;
}
