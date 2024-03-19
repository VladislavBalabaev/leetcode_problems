#include <stack>
#include <iostream>
#include <stdexcept>
#define MAX 1000

// stack - linear data structure; we can access only the top of the stack.
// LIFO & FILO (element that inserted L/F comes out F/L)

// types of stack: fixed size - array | dynamic size - linked list (extra memory for pointers)

// basic operations: push(), pop(), top(), isEmpty(), size()


class StackArray {
    int top;

public:
    int a[MAX];
    
    StackArray() { top = -1; };
    void push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty();
};


void StackArray::push(int x) {
    if (top <= MAX)
        a[++top] = x;
    else
        throw std::overflow_error("Stack overflow");
};


int StackArray::pop() {
    if (top >= 0)
        return a[top--];
    else
        throw std::underflow_error("Stack underflow");
};


int StackArray::peek() {
    if (top >= 0)
        return a[top];
    else
        throw std::range_error("Stack is empty.");
};


bool StackArray::isEmpty() {
    return top == -1;
};


// ----- ----- ----- ----- ----- 
class StackNode {
public:
    int data;
    StackNode* link;
};


StackNode* newNode(int data) {
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->link = NULL;
    
    return stackNode;
};


bool isEmpty(StackNode* root) {
    return !root;
};


void push(StackNode*& root, int data) {     // could be changed to ** like in https://stackoverflow.com/questions/66793794/why-do-i-need-to-use-double-asterisk
    StackNode* stacknode = newNode(data);
    stacknode->link = root;
    root = stacknode;
};


int pop(StackNode*& root) {
    if (isEmpty(root))
        throw std::underflow_error("Stack underflow");
    else {
        StackNode* temp = root;
        root = (root)->link;
        int popped = temp->data;
        free(temp);

        return popped;
    };
};


int peek(StackNode* root) {
    if (isEmpty(root))
        throw std::range_error("Stack is empty.");
    else
        return root->data;
};


int main() {
    // Array:
    std::cout << "Array:\n";
 
    StackArray s1;
    std::cout << s1.isEmpty() << '\n';

    s1.push(10);
    std::cout << s1.peek() << '\n';
    
    
    // LinkedList:
    std::cout << "LinkedList:\n";

    StackNode* root = nullptr;
    
    std::cout << isEmpty(root) << '\n';

    push(root, 10);
    push(root, 20);
    
    std::cout << pop(root) << '\n';
    std::cout << peek(root) << '\n';
    
    // STD
    std::stack<int> stackStd;
    stackStd.push(10);
    stackStd.push(20);

    while (!stackStd.empty()) {
        std::cout << stackStd.top() <<" ";
        stackStd.pop();
    }
    std::cout << "\n";


    return 0;
};
