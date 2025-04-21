#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1; // Initialize top of stack to -1 (empty stack)

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; // Return -1 to indicate an error (or a suitable error value)
    } else {
        int poppedValue = stack[top];
        top--;
        printf("%d popped from the stack\n", poppedValue);
        return poppedValue;
    }
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty, cannot peek\n");
        return -1; // Return -1 to indicate an error (or a suitable error value)
    } else {
        return stack[top];
    }
}

// Function to display the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    printf("Top element: %d\n", peek());
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(110); //stack overflow example
    display(); //stack overflow example
    printf("Top element: %d\n", peek());
    push(89);

    return 0;
}