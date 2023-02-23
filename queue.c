#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int main()
{

    int item, choice, i;
    int queue[MAX_SIZE];
    int rear = 0;
    int front = 0;
    int exit = 1;

    while(exit)
    {
        printf("\n1. Insert\n2. Remove\n3. Display\n4. Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            if(rear == MAX_SIZE)
            {
                printf("Full");
            }
            else
            {
                printf("\nEnter value:");
                scanf("%d",&item);
                printf("\nPosition : %d\nValue : %d",rear+1,item);
                queue[rear++] = item;
            }
            break;

        case 2:
            if(front == rear)
                {
                    printf("Empty.");
                }
                else
                {
                    printf("\nPosition : %d\nValue : %d",front,item);
                    front++;
                }
        case 3:
            printf("\nQueue size : %d", rear);
            for(i = front; i < rear; i++)
            {
                printf("\n Position : %d", queue[i]);
            }
            break;

        default:
            exit = 0;
            break;
        }
    }while(exit);
    return 0;
}
