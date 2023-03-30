#include<iostream>
#include<queue>
using namespace std;

class node{
   public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* bulidtree(node* root) { // it is node function
    cout << "Enter The Data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }
    cout << "Enter Data For Inserting in Left of : " << data << endl;
    root -> left = bulidtree(root->left);
    cout << "Enter Data For Inserting in Right of : " << data << endl;
    root -> right = bulidtree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            // old level complete travsal
            cout << endl;
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
    cout << endl;
}

void inorder(node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node* root) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

// Build From Level Order
void buildFromLevelOrder(node* &root) {
    queue<node*> q;
    cout << "Enter Data For Root : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter Left Node For : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter Right Node For : " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp -> right); 
        }
    }

}

void inorder(node* root, int &count) {  // LNR
    // base case
    if(root == NULL) {
        return;
    }
    inorder(root -> left);
    // Count Leaf Node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    inorder(root -> right);
    cout << "count : " << count << endl;
}

int CountLeafNode(node* root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}

int main()
{

    node* root = NULL;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    cout << endl;
    CountLeafNode(root);

/*
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = bulidtree(root);

    cout << "Printing The Level Order Traversal Output : " << endl;
    levelOrderTraversal(root);

    cout << "Printing inOrder Traversal Output : " << endl;
    inorder(root);  
    cout << endl;

    cout << "Printing PreOrder Traversal Output : " << endl;
    preorder(root);  
    cout << endl;

    cout << "Printing PostOrder Traversal Output : " << endl;
    postorder(root);  
    cout << endl;
*/



    return 0;
}