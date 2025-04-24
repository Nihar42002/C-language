#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10 // Maximum size of the stack

int stack[MAX_SIZE]; // Array to implement the stack
int top = -1;        // Variable to track the top of the stack, -1 indicates the stack is empty

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
        // If the stack is full, print an error message
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        // Increment top and insert the value
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        // If the stack is empty, print an error and return -1
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    } else {
        // Return the top element and decrement the top
        int poppedValue = stack[top];
        top--;
        printf("%d popped from the stack\n", poppedValue);
        return poppedValue;
    }
}

// Function to view the top element of the stack without removing it
int peek() {
    if (isEmpty()) {
        // If the stack is empty, print a message and return -1
        printf("Stack is empty, cannot peek\n");
        return -1;
    } else {
        // Return the top element
        return stack[top];
    }
}

// Function to display all elements of the stack
void display() {
    if (isEmpty()) {
        // If the stack is empty, print a message
        printf("Stack is empty\n");
    } else {
        // Print all elements from bottom to top
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function to demonstrate stack operations
int main() {
    push(10);  // Push 10 onto the stack
    push(20);  // Push 20 onto the stack
    push(30);  // Push 30 onto the stack
    display(); // Display current stack: 10 20 30

    pop();     // Pop the top element (30)
    display(); // Display updated stack: 10 20

    printf("Top element: %d\n", peek()); // Peek at the top element (20)

    // Pushing more elements to fill up the stack
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

    // This push should cause overflow because the stack is full
    push(110); // Expected overflow error
    display(); // Display all current elements

    printf("Top element: %d\n", peek()); // Peek at the top element (100)

    // Another push to show overflow again
    push(89);  // Will again trigger overflow

    return 0;  // End of program
}
