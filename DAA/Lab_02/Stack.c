#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top >= SIZE - 1)
    {
        printf("Stack OverFlow\n");
    }
    else
    {
        stack[++top] = value;
        printf("%d pushed in stack\n", value);
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d removed from stack\n", stack[top--]); // element nikde che ke khali print thai che e check karvanu che
        //update: remove pn thai che bhegu
    }
}

void peep()
{
    if (top <= -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The last element of the stack is:%d\n", stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("|%2d |\n", stack[i]);
    }
}
void change(int position, int value)
{
    if (top - position + 1 <= -1 || position < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        stack[top - position + 1] = value;
    }
}
int main()
{
    int choice, value, position;
    printf("Enter the value and select your choice from among :\n1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\nPress 0 to exit\n");
    do
    {
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            printf("Enter postion to change the value at:");
            scanf("%d", &position);
            printf("Enter the value to change:");
            scanf("%d", &value);
            change(position, value);
            break;
        case 5:
            display();
        case 0:
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice != 0);
    return 0;
}