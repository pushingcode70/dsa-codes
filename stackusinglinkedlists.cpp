//stack using linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;  // points to the top element
public:
    Stack() { top = nullptr; }

    void push(int val) {
        Node* newNode = new Node; //stores the address of the new node
        newNode->data = val;//accessing 
        newNode->next = top;//accessing which in case of 1st push is nullptr
        top = newNode;//updating value of top now sotres the adress of newnode
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    void display() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;//access the previous address value 
        }
        cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();     // Output: 30 20 10
    cout << s.peek() << "\n";  // Output: 30

    s.pop();
    s.display();     // Output: 20 10

    return 0;
}
