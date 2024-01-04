#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;
int main()
{
    int choice,value;
    printf("1. Push stack\n");
    printf("2. Print stack\n");
    printf("3. Pop stack\n");
    printf("4. Exit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter an element: ");
            scanf("%d",&value);
            push(value);
            break;

        case 2:
            print();
            break;

        case 3:
            value = pop();
            printf("The deleted element is %d\n",value);
            break;
        case 4:
            exit(1);
        default:
            printf("Error!! The option is not found!!\n\n");
        }
    }
    return 0;
}

int IsEmpty()
{
    if(head == NULL)
        return 1;
    else
        return 0;
}


void push(int value)
{
    struct node *curr;
    curr = (struct node*)malloc(sizeof(struct node));
    curr->val = value;
    curr->next = NULL;
    curr -> next = head;
    head = curr;
}


void print()
{
    struct node *curr;
    curr = head;
    if(IsEmpty())
    {
        printf("Stack underflow\n\n");
        main();
    }
    printf("The elements are: ");
    while(curr != NULL)
    {
        printf("%d ",curr-> val);
        curr = curr -> next;
    }
    printf("\n");
}

int pop()
{
    struct node *temp;
    int val;
    if(IsEmpty())
    {
        printf("Stack underflow\n\n");
        main();
    }
    else
    {
        temp = head;
        val = temp -> val;
        head = head -> next;
        free(temp);
        temp = NULL;
        return val;
    }
}

/**
 *
 * @author Hp
 */

