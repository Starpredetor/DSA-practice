/*
5. Theory:   
A stack is an ordered list in which all insertions and deletions are made at one end, called the top. 
Given a stack S=(a[1],a[2],.......a[n]) then we say that a1 is the bottommost element and 
element a[i]) is on top of element a[i-1], 1<i<=n. The restrictions on a stack imply that if 
the elements A,B,C,D,E are added to the stack , n that order ,then the first element to be 
removed/deleted must be E. Equivalently we say that the last element to be inserted into the 
stack will be the first to be removed. For this reason stacks are sometimes referred to as 
Last In First Out (LIFO)lists. 
 
6. Algorithm 
    a) Algorithm for Inserting an item into the stack(PUSH) 
    PUSH(maxsize,item) 
    Let stack[maxsize] is an array for implementing thestack. 
        1. Check for stackoverflow 
            If top= maxsize – 1, then print : “Stack Overflow” andreturn. 
        2. Set top=top+1 
        3. Setstack[top]=item 
        4. return. 
    b) Algorithm for Deleting an item from the stack(POP) 
        POP(maxsize) 
        1. Check if top < 0 then print : “Stack Underflow” andreturn. 
            else set item =stack[top] 
        2. Set top = top –1 
        3. Return the deleted item from thestack
*/



#include <stdio.h>

#define MAX 5

int top = -1;
int stk[MAX];

int pop();
void push(int item);
void display();

void main()
{
    int n;
    for(int i=0; i <= 4; i++)
    {
        printf("Enter element: ");
        scanf("%d", &n);
        push(n);
    }
    display();
    pop();
    printf("-------\n");
    display();
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        return stk[top--];
    }
}

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stk[top] = item;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stk[i]);
    }
}
