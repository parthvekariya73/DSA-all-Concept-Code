// approch 2-

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  // find mid element
  Node* getMid(Node* head) {
      Node* slow = head;
      Node* fast = head -> next;
      
      while(fast != NULL && fast -> next != NULL) {
          fast = fast -> next -> next;
          slow = slow -> next;
      }
      return slow;
  }
  
  // reverse node
  Node* reverse(Node* head) {
      Node* curr = head;
      Node* prev = NULL;
      Node* next1 = NULL;
      
      while(curr != NULL) {
          next1 = curr -> next;
          curr -> next = prev;
          prev = curr;
          curr = next1; 
      }
      return prev;
  }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head == NULL || head -> next == NULL) {
            return true;
        }
        
        // step 1 middle ele
        Node* mid = getMid(head);
        
        // step 2 reverse list after middle
        Node* temp = mid -> next;
        mid -> next = reverse(temp);
     
        // step 3 compare both halfs
        Node* head1 = head;
        Node* head2 = mid -> next;
        
        while(head2 != NULL) {
            if(head1 -> data != head2 -> data) {
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        // step 4 repete step2
        temp = mid -> next;
        mid -> next = reverse(temp);
        
        
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
