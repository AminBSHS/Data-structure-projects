#include <iostream>
using namespace std;
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void Push(int item) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow!" << endl;
    } else {
        top++;
        stack[top] = item;
    }
}

int Pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
        return -1; // or throw an exception
    } 
    else {
        int item = stack[top];
        top--;
        return item;
    }
}

int Peek() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return -1; // or throw an exception
    } else {
        return stack[top];
    }
}

void IsEmpty() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
}

int main() {
    Push(5);
    Push(10);
    IsEmpty();
 
    cout << Pop() << endl; // 10
    cout << Pop() << endl; // 5
    IsEmpty();
    return 0;
}
