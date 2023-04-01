/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

void populate(Node* &tail, Node* curr)
{
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    // Write your code here.
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);

    Node* zerotail = zerohead;
    Node* onetail = onehead;
    Node* twotail = twohead;

    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        int value = curr -> data;
        if(value == 0) {
            populate(zerotail, curr);
        }else if (value == 1) {
            populate(onetail, curr);
        }else if (value == 2) {
            populate(twotail, curr);
        }
        curr = curr -> next;
    }

    // merge
    if(onehead -> next != NULL) {
        zerotail -> next = onehead -> next;
    }else{
        zerotail -> next = twohead -> next;
    }

    onetail -> next = twohead -> next;
    twotail -> next = NULL;

    // setup head
    head = zerohead -> next;

    // delete dummy node
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;

}

