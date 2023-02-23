#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[10];
int top = -1;

void main()
{
    int value, choice;

    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value:");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case(4):
                exit(0);

            default:
                printf("Wrong Choice.");
        }
    }
}

void push(int value)
{
    if(top == SIZE-1)
    {
        printf("\nStack is full.");
    }

    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty.");
    }
    else
    {
        printf("\n%d deleted",stack[top]);
        top--;
    }
}

void display()
{
    if(top == -1)

    {
        printf("/nStack is empty.");
    }
    else
    {
        int i;
        printf("\nElements are:");
        for(i = top; i >= 0; i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
