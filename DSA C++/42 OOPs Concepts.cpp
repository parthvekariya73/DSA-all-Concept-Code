#include<iostream>
using namespace std;

// Class :-
class hero {
	// Propertites :-
	
	public:				// Access Modifiers --> public that access class and object
	int health;
	string name;
	static int time;
	
	 private:			// Access Modifiers --> private that access only for class
	int level;
	
	public:
		// Getter and Setter :-
	void setlevel(int l, string name) {
		if(name == "parth") { 
			level = l;	
		} 		// else name != "parth then automatic compiler return 1 or 0
	}
	int getlevel() {
		return level;
	}
	void print() {
		cout << "Name is :- " << this->name << endl;
		cout << "Health is :- " << this->health << endl;
	}
//	Constructor Call :-
	// simple Constructor Call :-
	hero() {
		cout << "Constructor Called" << endl;
	}
	// parameterted Constructor Call
		hero(int health) {
			cout << "this is :- " << this << endl;
			this -> health = health;
		}
		hero(int health, string name) {
			this -> health = health;
			this -> name = name;
		}
	// Copy Constructor Call :-
		hero(hero& temp) {
			// cout << "Copy Constructor Call :- " << endl;
			this -> health = temp.health;
			this -> name = temp.name;
		}
		
//	Destructor Call :-
	~hero() {
		cout << "Destructor Called.." << endl;
	}

// Static Function :-
	static int random() {
		//cout << this -> health << endl;		// error -> this keyword not use static function
		return time;
	}
	

};

int hero::time = 5;

int main()
{
/*
	// object :-
	hero parth;

	//cout << "SIZE OF " << sizeof(parth) << endl;

	// object define :-
	parth.name = "parth";	
	parth.health = 70;
	parth.setlevel(10,parth.name);

	// Access Properties :-
	cout << "Name is :- " << parth.name << endl;
	cout << "Health is :- " << parth.health << endl;
	cout << "Level is :- " << parth.getlevel() << endl;
	
	cout << "SIZE OF " << sizeof(parth) << endl;
*/



//	Static Allocation :-
		/*	hero a;
			a.health = 70;
			a.name = "parth";
			cout << "Level is :- " << a.health << endl;
			cout << "Name is :- " << a.name << endl; */
	
//	Dynamic Allocation :-
		/*	hero *b = new hero;
			(*b).health = 70;
			(*b).name = "parth";
			b->setlevel(10,b->name);
			cout << "Name is :-  " << b->name << endl;
			cout << "Health is :-  " << (*b).health << endl;
			cout << "Level is :-  " << b->getlevel() << endl; */	
	
	
	
	
//	object created Constructor :-
	//static all.. Constructor =
		//hero parth(10);    
		//cout << "Address Of Parth :- " << &parth << endl;
	//Dynamic all.. Constructor =
		//hero *h = new hero;
	
// Copy Constructor :-
	/* hero wanda(70, "wanda");
	wanda.print();
	hero parth(wanda); 
	parth.print();			/* --> parth.health = parth.health; 	parth.name = wanda.name */ 
	
// Copy Assignment Operator :-
	/* hero hero1;
	hero hero2;
	hero1.health = 50;
	hero1.name = "parth";
	hero2.health = 40;
	hero2.name = "jay";
	hero1 = hero2; 		// Copy Assignment Operator
	hero1.print();
	hero2.print();	*/
	
//	Destructor :-
	// static alloc
	/*	hero a;
	// Dynamic alloc
		hero *h = new hero();
		// Manually Destructor Call
		delete h;	*/
	
//	Static keyword :- 
	// Good pratic to access static keyword
	/* cout << hero::time << endl;		// no object create and to access variable that possible on static keyword
	
	hero a;
	cout << a.time << endl;		// bad pratic to access static keyword
	*/
	
//	Static Function :-
	cout << hero::random() << endl;
	
	
	return 0;
}
