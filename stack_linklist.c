#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int val)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = val;

    if (top == NULL)
    {
        new->next = NULL;
    }
    else
    {
        new->next = top;
    }
    top = new;
}

void pop()
{
    if (top == NULL)
    {
        printf("Underflow\n");
        return;
    }

    top = top->next;
}

void dip()
{
    if (top == NULL)
    {
        printf("Underflow\n");
        return;
    }

    struct Node *temp = top;

    while (top != NULL)
    {
        printf("%d ", top->data);
        top=top->next; 
    }
    printf(" NULL\n\n");
}

int main()
{
    int val, c;
    while (1)
    {

        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            scanf("%d ", &val);
            push(val);
            break;

        case 2:
            pop();
            break;
        case 3:
            dip();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Wrong input \n");
            break;
        }
    }
}
