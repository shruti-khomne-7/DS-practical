#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full!\n");
    } else {
        stack[++top] = value;
        printf("Pushed %d to the stack\n", value);
        printstack();
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Popped value: %d\n", stack[top--]);
        printstack();
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Top value: %d\n", stack[top]);
    }
}

void printstack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Current stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Empty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isEmpty()) {
                    printf("The stack is empty.\n");
                } else {
                    printf("The stack is not empty.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

