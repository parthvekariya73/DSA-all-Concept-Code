#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }

};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            // old level complete travsal
        
            if(!q.empty()) {
                // queue still has came chold
                q.push(NULL);
            }
        }else{
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
    
}


void inorder(Node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(Node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

Node* insertIntBST(Node* root, int d) {
    // base caes
    if(root == NULL) {
        root = new Node(d);
        return root;
    }

    if(d > root -> data) {
        // Right Part
        root ->right = insertIntBST(root->right, d);
    }else{
        root ->left = insertIntBST(root->left, d);
    }
    
    return root;
}

void takeInput(Node* root) {
    int data;
    cin >> data;
    while(data != -1) {
        root = insertIntBST(root, data);
        cin >> data;
    }
}




bool searchBSTelement(Node* root, int x) {
    // base case

    /* Recursive 
    if(root == NULL) {
        return false;
    }

    if( root->data == x) {
        return true;
    }

    if( root->data > x) {
        // left part
        return searchBSTelement(root->left, x);
    }else{
        // Right part
        return searchBSTelement(root->right, x); 
    }
    */

    Node* temp = root;
    while (temp != NULL)
    {
        if(temp -> data == x) {
            return true;
        }

        if( temp -> data > x) {
            temp = temp -> left;
        }else{
            temp = temp -> right;
        }
    }    
    return false;
}

int main()
{
 
    Node* root = NULL;

    cout << " Enter Data to Ctrate BST : " << endl;
    takeInput(root);

    // cout << "Printing The BST " << endl; 
    // levelOrderTraversal(root);

    // cout <<"Prining Inorder" << endl;
    // inorder(root);
 
    // cout <<"Prining Preorder" << endl;
    // preorder(root);
 
    // cout <<"Prining Postorder" << endl;
    // postorder(root);
 



    if(!searchBSTelement(root, 10)) {
        cout << "Abpsont" << endl;
    }else{
        cout << "Present" << endl;
    }












    return 0;
}