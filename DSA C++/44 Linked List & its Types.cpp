#include<iostream>
using namespace std;

// Singly LL :-
/*
class Node {
	public:
		int data;
		Node* next;
		
		// Constructor :
		Node(int data) {
			this -> data = data;
			this -> next = NULL;
		}
		// Destractor :
		~Node() {
			// memory free = 
			int value = this -> data;
			if(this -> next != NULL) {
				delete next;
				this -> next = NULL;
			}
			cout << "Memory Free :- " << value << endl;
		}
};

	// InsertAtBegnning :-
void InsertAtHead(Node* &head, int d) {
	// new node create
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

	// InsertAtEnd :-
void InsertAtTail(Node* &tail, int d) {
	// new node create
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = temp;		// 	tail = tail -> next;
}

	// InsertAtBetween :-
void InsertAtPosition(Node* &tail, Node* &head, int position, int d) {
	if(position == 1) {
		InsertAtHead(head, d);
		return;
	}
	Node* temp = head;
	int count = 1;
	while(count < position-1) {
		temp = temp -> next;
		count++;
	}
	if(temp -> next == NULL) {
		InsertAtTail(tail, d);
		return;
	}
	// creating a node for d
	Node* nodeToInsert = new Node(d);
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}

	// Deletion :-
	void deleteNode(int position, Node* &head) {
		// Deletion Start = 
		if(position == 1) {
			Node *temp = head;
			head = head -> next;
			// memory free
			temp -> next = NULL;
			delete temp;
		}else{
			// Deletion Middle or Last Node =
			Node* curr = head;
			Node* prev = NULL;
			int count = 1;
			while(count < position) {
				prev = curr;
				curr = curr -> next;
				count++;
			}
			prev -> next = curr -> next;
			curr -> next = NULL;
			delete curr;
		}
	}

void printLL(Node* &head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
*/

/*
//	2. Doubly Linked List :-
class Node {
	public:
		int data;
		Node* prev;
		Node* next;
		// Constructer =
		Node(int d) {
			this -> data = d;
			this -> prev = NULL;
			this -> next = NULL;
		}
		// Destructer = 
		~Node() {
			int val = this -> data;
			if(next != NULL) {
				delete next;
				next = NULL;
			}
			cout << "Memory Free For Node With Data " << val << endl;
		}
};

// Length
int getLength(Node* head) {
	int len = 0;
	Node* temp = head;
	while(temp != NULL) {
		len++;
		temp = temp -> next;
	}
	return len;
}

	// InsertAtBegnning :-
void insertAtHead(Node* &head, int d) {
	if(head == NULL) {
		Node* temp = new Node(d);
		head = temp;
	}else{
		Node* temp = new Node(d);
		temp -> next = head;
		head -> prev = temp;
		head = temp;	
	}
}

	// InsertAtENd :-
void insertAtTail(Node* &tail, int d) {
	if(tail == NULL) {
		Node* temp = new Node(d);
		tail = temp;
	}else{
		Node* temp = new Node(d);
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;	
	}
}

	// InsertAtPosition :-
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
	if(position == 1) {
		insertAtHead(head, d);
		return;
	}
	Node* temp = head;
	int count = 1;
	while(count < position-1) {
		temp = temp -> next;
		count++;
	}
	if(temp -> next == NULL) {
		insertAtTail(tail, d);
		return;
	}
	// creating a node for d
	Node* nodeToInsert = new Node(d);
	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp; 
}

	// Deletion :-
//void deleteNode(int position, Node* &head) {
	// Deletion Start = 
	if(position == 1) {
		Node *temp = head;
		temp -> next -> perv = NULL;
		head = temp -> next;
		// memory free
		temp -> next = NULL;
		delete temp;
	}else{
		// Deletion Middle or Last Node =
		Node* curr = head;
		Node* prev = NULL;
		int count = 1;
		while(count < position) {
			prev = curr;
			curr = curr -> next;
			count++;
		}
		curr -> perv = NULL;
		prev -> next = curr -> next;
		curr -> next -> prev = NULL;
		curr -> next = NULL;
		delete curr;
	}
}

void print(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
*/

class Node {
	public:
		int data;
		Node* next;
		
	// Constructer = 
	Node(int d) {
		this -> data = d;
		this -> next = NULL;
	}
	~Node() {
		int value = this -> data;
		if(this -> next != NULL) {
			delete next;
			next = NULL;
		}
		cout << "Memory Free For Node With Data " << value << endl;
	}
};

void insertNode(Node* &tail, int element, int d) {
	// assuming that the element is present in the list
	
	// empty list = 
	if(tail == NULL) {
		Node* newNode = new Node(10);
		tail = newNode;
		newNode -> next = newNode;
	}else{
		// non empty list =
		Node* curr = tail;
		while(curr -> data != element) {
			curr = curr -> next;
		}
		// element found = 
		Node* temp = new Node(d);
		temp -> next = curr -> next;
		curr -> next = temp;
	}
}

void print(Node* tail) {
	Node* temp = tail;
	do{
		cout << tail -> data << " ";
		tail = tail -> next;
	}while(tail != temp);
	cout << endl;
}

int main()
{
	/*
//	Singly LL :-
	Node* node1 = new Node(10);
	//cout << node1 -> data << endl;
	//cout << node1 -> next << endl;	
	
	// headd Pointed to node1
	Node* head = node1;
	Node* tail = node1;
	// InsertAtBegnning :-
		 //printLL(head);
		//InsertAtHead(head, 20);
		//printLL(head);
		//InsertAtHead(head, 30);
		//printLL(head); 
	// InsertAtENd :-
		 printLL(head);
		InsertAtTail(tail, 20);
		printLL(head);
		InsertAtTail(tail, 30);
		printLL(head); 
	// InsertAtBetween :-
		InsertAtPosition(tail, head, 4, 25);
		printLL(head);
		cout << "Head :- " << head -> data << endl;
		cout << "Tail :- " << tail -> data << endl;	
	
	// Deletion :-
	// Delete Start = 
			//deleteNode(1, head);
			//printLL(head);
	// Delete Middle =
			//deleteNode(2, head);
			//printLL(head);
	// Delete End =
			//deleteNode(4, head);
			//printLL(head);
	*/
	

	/*
//	2. Doubly Linked List :-
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	print(head);
	cout << "Length is : " << getLength(head) << endl;
	
	// InsertAtBegnning :-
		insertAtHead(head, 11);
		print(head);
		insertAtHead(head, 12);
		print(head);
		insertAtHead(head, 13);
		print(head);

	// InsertAtENd :-
		insertAtTail(tail, 9);
		print(head);
	
	// InsertAtPosition :-
		insertAtPosition(head, tail, 2, 100);
		print(head);
		insertAtPosition(head, tail, 7, 1001);
		print(head);
	
	// error :-
	// Deletion :-
	// Delete Start = 
			//deleteNode(1, head);
			//print(head);
	// Delete Middle =
			//deleteNode(2, head);
			//printLL(head);
	// Delete End =
			//deleteNode(4, head);
			//printLL(head);
	*/
	
	
//	Circular Linked List :-
	Node* tail = NULL;
	
	// empty list =  
	insertNode(tail, 5, 3);
	print(tail);
	
	insertNode(tail, 3, 4);
	print(tail);
	
	
	return 0;
}
