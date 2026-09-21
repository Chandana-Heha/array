#include <stdio.h>

#define max 100

int stack[100];
int top = -1;

void push(int value)
{
    if (top == max - 1)
    {
        printf("Stack is overflow\n");
        return;
    }

    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow\n");
        return -1;
    }

    return stack[top--];
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top];
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                printf("Popped: %d\n", pop());
                break;

            case 3:
                printf("Top element: %d\n", peek());
                break;

            case 4:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 5:
                if (isFull())
                    printf("Stack is full\n");
                else
                    printf("Stack is not full\n");
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

