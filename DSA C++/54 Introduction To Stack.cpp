#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // Properties
    public:
        int *arr;
        int top;
        int size;

    //  Behavior
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void Push(int element) {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0)
        {
            top--;
        }else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        // top
        if (top >= 0)
        {
            return arr[top];
        }else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }   
    }

    bool isEmpty() {
        if (top == -1)
        {
            return true;
        }else
        {
            return false; 
        }   
    }

};

class TwoStack {
    public:
        int top1;
        int top2;
        int *arr;
        int size;

    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void Push1(int num) {
        // atleast a empty space present
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    void Push2(int num) {
        // atleast a empty space present
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    int pop1() {
        if(top1 == 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    int pop2() {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }

};


int main()
{
    
// 3.
    TwoStack s(5);

    s.Push1(10);
    s.Push1(20);
    s.Push2(11);
    s.Push2(21);

    s.pop1();
    s.pop2();


// 2.
/*
    Stack st(5);

    st.Push(22);
    st.Push(42);
    st.Push(53);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty())
    {
        cout << "Hmm.. Stack is Empty" << endl;
    }else
    {
        cout << "Stack is not Empty" << endl;
    }

*/







// 1.
/*
    // Creation Stack
    stack<int> s;

    // Push Opertion
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Pop Opertion
    s.pop();

    // Top function
    cout << "Printing Top element : " << s.top() << endl;

    // Empty Function
    if (s.empty())
    {
        cout << "Stack is Empty" << endl;
    }else
    {
        cout << "Stack is not Empty" << endl;
    }
    
    // Size Function
    cout << "Stack Size : " << s.size() << endl;
    
*/


    return 0;
}