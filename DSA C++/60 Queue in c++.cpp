#include<iostream>
// #include<queue>
using namespace std;

class Queue {
    public:
    int* arr;
    int front;
    int rear;
    int size;

        Queue(int s) {
            this -> size = s;
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        void enqueue(int data) {
             if (rear == size)
             {
                 cout << "Queue is Full.." << endl;
             }else
             {
                 arr[rear] = data;
                 rear++;
             }
        }

        int dequeue() {
             if (front == rear)
             {
                 cout << "Queue is Empty.." << endl;
                 return -1;
             }else
             {
                 int ans = arr[front];
                 arr[front] = -1;
                 front++;
                 if(front == rear) {
                     front = 0;
                     rear = 0;
                 }
                return ans;
             }
        }

        int front1() {
            if (front == rear)
            {
                return -1;
            }else{
                return arr[front];
            }
        }

        bool isEmpty() {
            if(front == rear) {
                return true;
            }else{
                return false;
            }
        }

};

class CircularQueue{
    public:
        int *arr;
        int front;
        int rear;
        int size;

        CircularQueue(int s) {
            this -> size = s;
            arr = new int[size];
            front = rear = -1;
        }

        bool Enqueue(int value) {
            if( (front == 0 && rear == size-1) || (rear == (front-1) % (size-1)) ) 
            {
                cout << "Queue is Full" << endl;
                return false;
            }else if(front == -1) // first element insert
            {
                front = rear = 0;
                arr[rear] = value;
            }else if( rear == size-1 && front != 0 )
            {
                rear = 0;
                arr[rear] = value;
            }else{
                rear++;
            }
            arr[rear] = value;
            return true;
        }   

        int deQueue() {
            if(front == -1) {
                cout << "Queue is Empty" << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if(front == rear) {
                front = rear = -1;   // first position
            }else if(front == size - 1) {
                front = 0;
            }else{
                front++;
            }
            return ans;
        }

};

class Deque
{    
    public:
        int* arr;
        int front;
        int rear;
        int size;

        Deque(int n) {
            this -> size = n;
            arr = new int(n);
            front = -1;
            rear = -1;
        }

        bool pushfront(int x) {
            if( isFull() ) 
            {
                cout << "Deque is Full" << endl;
                return false;
            }else if(front == -1) {
                front = rear = 0;
            }else if( (front == 0) && (rear != size-1) ) {
                front = size - 1;
            }else{
                front--;
            }
            arr[front] = x;
            return true;
        }

        bool pushrear(int x) {
            if( isFull() ) 
            {
                cout << "Deque is Full" << endl;
                return false;
            }else if(front == -1) {
                front = rear = 0;
            }else if( rear == size - 1 && front != 0) {
                rear = 0;
            }else{
                rear--;
            }
            arr[rear] = x;
            return true;
        }

        int popfront() {
            if(front == -1) {
                cout << "Queue is Empty" << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if(front == rear) {
                front = rear = -1;   // first position
            }else if(front == size - 1) {
                front = 0;
            }else{
                front++;
            }
            return ans;
        }

        int poprear() {
            if(front == -1) {
                cout << "Queue is Empty" << endl;
                return -1;
            }
            int ans = arr[rear];
            arr[rear] = -1;
            if(front == rear) {
                front = rear = -1;   // first position
            }else if(rear == 0) {
                rear = size - 1;
            }else{
                rear++;
            }
            return ans;
        }

        int getfront() {
            if(isEmpty()) {
                return -1;
            }
            return arr[front];
        }

        int getrear() {
            if(isEmpty()) {
                return -1;
            }
            return arr[rear];
        }

        bool isEmpty() {
            if(front == -1) {
                return true;
            }else{
                return false;
            }
        }

        bool isFull() {
             if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1) % (size-1)) ) 
             {
                 return true;
             }else{
                 return false;
             }
        }


};


int main()
{





// 4. doubly ended queue with STL
/*
    // comment out <queue>
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    if(d.empty()) {
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is Not Empty" << endl;
    }
*/
    
// 3.   CircularQueue  
/*
    CircularQueue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    q.deQueue();
*/




// 2.
/*
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue Front is : " << q.front1() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Queue Front is : " << q.front1() << endl;

    q.dequeue();
    q.dequeue();

    q.isEmpty();

*/





// 1.
/*
    // Create Queue
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Front of queue is : " << q.front() << endl;

    cout << "Size of queue is : " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << "Size of queue is : " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is Empty.." << endl;
    }else{
        cout << "Queue is Not EMpty.." << endl;
    }
*/ 








    return 0;
}