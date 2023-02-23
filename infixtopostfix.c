#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;

char push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return ("INVALID");
    else
        return stack[top--];
}

int prior(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char ex, *e;
    printf("Enter expression:");
    scanf("%s", exp);
    printf("\n");
    e = exp;

    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c", *e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((ex = pop()) != '(')
            printf("%c", ex);
        }
        else
        {
            while(prior(stack[top]) >= prior(*e))
                printf(*e);
                push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c", pop());
    }
    return 0;
}
