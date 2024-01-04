#include <stdio.h>
#define MAX 5

int s[MAX], top = -1;

int isEmpty();
int isFull();
int push(int);
int pop();
void print();


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
            printf("\nEnter an element: ");
            scanf("%d",&value);
            push(value);
            break;

        case 2:
            print();
            break;

        case 3:
            value = pop();
            printf("\nThe deleted element is %d\n",value);
            break;
        case 4:
            exit(1);
        default:
            printf("Error!! The option is not found!!\n\n");
        }
    }
}

int isFull()
{
    if(top +1 == MAX)
        return 1;
    else
        return 0;
}

int isEmpty()
{

    if(top == -1)
        return 1;
    else
        return 0;
}

int push(int data)
{
   if(isFull())
        printf("\nStack Overflow.\n");
    else
    {
        top++;
        s[top] = data;
        return s[top];
    }
}

int pop()
{
    int data;
      if(isEmpty())
        printf("\nStack underflow.\n");
    else
    {
        data = s[top];
        top--;
        return data;
    }
}

void print()
{
    if(isEmpty())
        printf("\nStack underflow.\n");
    else
    {
        for(int i=top ; i>=0 ; i--)
            printf("%d ",s[i]);
        printf("\n");
    }
}


