#include <iostream>
using namespace std;
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void Push(int item) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow" << endl;
    } else {
        top++;
        stack[top] = item;
    }
}

int Pop() {
    if (top == -1) {
        cout << "Stack is empaty" << endl;
        return -1; 
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
        return -1; 
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
 
    cout << Pop() << endl; 
    cout << Pop() << endl; 
    IsEmpty();
    return 0;
}
