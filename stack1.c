#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int val;
    struct Stack *next;
} Stack;

Stack *createnode(int val)
{
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->val = val;
    temp->next = NULL;
    return temp;
}
Stack *push(int val, Stack *head)
{
    Stack *newStack = createnode(val);
    newStack->next = head;
    return newStack;
}

Stack *createStack()
{
    int num = 1;
    int val;
    Stack *head = NULL;
    while (num)
    {
        printf("Do you want to Push an element to your Stack?\n");
        printf("Press 1 for Yes and 0 for No:\n");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        printf("Enter the value:\n");
        scanf("%d", &val);
        head = push(val, head);
    }
    printf("List Created!\n");
    return head;
}

void display(Stack *head)
{
    if (head == NULL)
    {
        printf("Stack Underflow\n");
    }
    Stack *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

Stack *pop(Stack *head)
{
    Stack *temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main()
{
    int choice, val;
    Stack *head;
    do
    {
        printf("ENTER CHOICE\n1.Create Stack\n2.Push into Stack\n3.Pop from Stack\n4.Display\n0.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = createStack();
            break;
        case 2:
            printf("Enter the value to be pushed:\n");
            scanf("%d", &val);
            head = push(val, head);
            break;
        case 3:
            head = pop(head);
            printf("Value popped!");
            break;
        case 4:
            display(head);
            break;
        case 5:
            choice = 0;
            break;
        default:
            break;
        }
    } while (choice != 0);
    return 0;
}
