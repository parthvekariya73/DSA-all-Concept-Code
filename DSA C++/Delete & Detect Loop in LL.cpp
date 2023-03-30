#include<iostream>
#include<map>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

bool detectLoop(Node* head)
{
    // empty list
    if(head == NULL)
    {
        return false;
    }
    map<Node*, bool> visited;

    Node* temp = head;
    while( temp!=NULL )
    {
        // cycle 
        if(visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    } 
    return false;
} 

Node* floydDetectLoop(Node* head)
{
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast) {
            cout << "Present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head) 
{
    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeloop(Node* head) {

    if(head == NULL)
        return;
    
    Node* strartofLoop = getStartingNode(head);
    Node* temp = strartofLoop;
    while(temp -> next != strartofLoop) {
        temp = temp -> next;
    }
    temp -> next = NULL;

}

int main()
{
    return 0;
}