#include<iostream>
using namespace std;

class Node{
	public :
		int data;
		Node *next;
		Node(int data) {
			this -> data = data;
		}
};

// Iterative Solve = 
Node* reverseLL(Node *head) {
	if(head == NULL || head -> next == NULL) {
		return head;
	}
	Node* prev = NULL;
	Node* curr = head;
	Node* forword = NULL;
	while(curr != NULL) {
		forword = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = forword;
		
	}
	return prev;
}

	Node* curr = head;
	Node* prev = NULL;
	Recursivereverse(head, curr, prev);
	return head;
}



int main()
{
	
	Node* node = new Node(10);
	Node* head = node;
	reverseLL(head);
	
	
	
	return 0;
}
