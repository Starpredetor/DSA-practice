/*
5. Theory:   
 
A singly linked list is 2 successive node of the linked list linked with each other in sequential 
linear manner. Movement in forward direction is possible. The linked list consists of a series 
of structures. They are not required to be stored in adjacent memory locations. Each structure 
consists of a data field and address field. Address field contains the address of its successors. 
A linked list can be created using dynamic memory allocation as well. This reduces the 
chances of wastage of memory. 
Basic Linked list operations: 
1. Creating s linked list 
2. Check whether list is empty 
3. Inserting an item  
4. Deleting an item 
5. Searching an item 
6. Retrieving a node 
 
 
 
21 
 
7. Displaying the list 
8. Find length of list 
 
6. Algorithm 
 
a) Algorithm to insert a node at the beginning 
 
Step 1: IF PTR = NULL 
Write OVERFLOW 
Go to Step 7 
[END OF IF] 
Step 2: SET NEW_NODE = PTR 
Step 3: SET PTR = PTR → NEXT 
Step 4: SET NEW_NODE → DATA = VAL 
Step 5: SET NEW_NODE → NEXT = HEAD 
Step 6: SET HEAD = NEW_NODE 
Step 7: EXIT 
 
b) Algorithm to insert a node at the end 
 
Step 1: IF PTR = NULL Write OVERFLOW 
Go to Step 1 
[END OF IF] 
Step 2: SET NEW_NODE = PTR 
Step 3: SET PTR = PTR - > NEXT 
Step 4: SET NEW_NODE - > DATA = VAL 
Step 5: SET NEW_NODE - > NEXT = NULL 
Step 6: SET PTR = HEAD 
Step 7: Repeat Step 8 while PTR - > NEXT != NULL 
Step 8: SET PTR = PTR - > NEXT 
[END OF LOOP] 
Step 9: SET PTR - > NEXT = NEW_NODE 
Step 10: EXIT 
 
c) Algorithm to insert a node after the specified node 
 
STEP 1: IF PTR = NULL 
WRITE OVERFLOW 
GOTO STEP 12 
END OF IF 
STEP 2: SET NEW_NODE = PTR 
STEP 3: NEW_NODE → DATA = VAL 
STEP 4: SET TEMP = HEAD 
STEP 5: SET I = 0 
STEP 6: REPEAT STEP 5 AND 6 UNTIL I 
STEP 7: TEMP = TEMP → NEXT 
STEP 8: IF TEMP = NULL 
 
 
22 
 
WRITE "DESIRED NODE NOT PRESENT" 
GOTO STEP 12 
END OF IF 
END OF LOOP 
STEP 9: PTR → NEXT = TEMP → NEXT 
STEP 10: TEMP → NEXT = PTR 
STEP 11: SET PTR = NEW_NODE 
STEP 12: EXIT 
 
d) Algorithm to delete a first node 
 
Step 1: IF HEAD = NULL 
Write UNDERFLOW 
 Go to Step 5 
 [END OF IF] 
Step 2: SET PTR = HEAD 
Step 3: SET HEAD = HEAD -> NEXT 
Step 4: FREE PTR 
Step 5: EXIT 
 
e) Algorithm to delete a last node 
 
Step 1: IF HEAD = NULL 
Write UNDERFLOW 
Go to Step 8 
[END OF IF] 
Step 2: SET PTR = HEAD 
Step 3: Repeat Steps 4 and 5 while PTR -> NEXT!= NULL 
Step 4: SET PREPTR = PTR 
Step 5: SET PTR = PTR -> NEXT 
[END OF LOOP] 
Step 6: SET PREPTR -> NEXT = NULL 
Step 7: FREE PTR 
Step 8: EXIT 
 
f) Algorithm to delete a node after a specified node 
 
STEP 1: IF HEAD = NULL 
WRITE UNDERFLOW 
    GOTO STEP 10 
   END OF IF 
STEP 2: SET TEMP = HEAD 
STEP 3: SET I = 0 
STEP 4: REPEAT STEP 5 TO 8 UNTIL I 
STEP 5: TEMP1 = TEMP 
STEP 6: TEMP = TEMP → NEXT 
STEP 7: IF TEMP = NULL 
WRITE "DESIRED NODE NOT PRESENT" 
 
 
23 
 
GOTO STEP 12 
END OF IF 
STEP 8: I = I+1 
END OF LOOP 
STEP 9: TEMP1 → NEXT = TEMP → NEXT 
STEP 10: FREE TEMP 
STEP 11: EXIT 
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int i;
struct node *head,*temp,*temp1,*new_node;
void creation();
void insert();
void delete();
void display();
void beginning();
void end();
void after();
void before();
void first();
void last();
void spe();




void creation(){
    do {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->next=0;
        printf("Enter data:-");
        scanf("%d",&new_node->data);
        if(head==0){
            head=temp=new_node;
        } else {
            temp->next=new_node;
            temp=new_node;
        }
        printf("To continue press 1 else press 2:-");
        scanf("%d",&i);
    } while (i!=2);
}

void display(){
    if(head==0){

        printf("No Node present\n");
    } else {
        temp=head;
        while (temp->next!=0){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        printf(" %d ",temp->data);
    }
    printf("\n");
}

    /* 
*
*
*
*
PLEASE CHECK QUESTION AND REMOVE THE ONES NOT REQUIRED
*
*
*
*
*
*
*/
void insert()
{
    int i;
    do{
        int choice;
        printf("Enter where new node to be added:-\n1.At beginning\n2.At end\n3.Insertion after a specific node\n4.Insertion before a specific node\nEnter ur choice:-");
        scanf("%d",&choice);
        switch(choice)
            {
             case 1:
                beginning();
                break;
            case 2:
                end();
                break;
            case 3:
                after();
                break;
           case 4:
                before();
                break;
            default:
                printf("\nInvalid choice");
            }
            printf("To continue press 1 else press 2:-");
            scanf("%d",&i);
    } while (i!=2);
    
}

void beginning(){
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:-");
    scanf("%d",&new_node->data);
    if(head==0){
        head=new_node;
        new_node->next=0;
    }
    else {
        new_node->next=head;
        head=new_node;
        }  
}

void end(){
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->next=0;
    printf("Enter data:-");
    scanf("%d",&new_node->data);
    if(head==0){
        head=new_node;
        new_node->next=0;
    }else{
        temp=head;
        while (temp->next!=0){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void after(){
    int val;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->next=0;
    printf("Enter data of new node:-");
    scanf("%d",&new_node->data);
    if(head==0){
        head=new_node;
        new_node->next=0;
    }
    else{
        temp=head;
        printf("\nenter data after which new node to be inserted:-");
        scanf("%d",&val);

        while (temp->data!=val){
            temp=temp->next;
        }
        temp1=temp->next;
        new_node->next=temp1;
        temp->next=new_node;
    } 
}

void before(){
    int val;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->next=0;
    printf("Enter data:-");
    scanf("%d",&new_node->data);
    if(head==0){
        head=new_node;
        new_node->next=0;
    }

    else{
        printf("\nEnter data after which new node to be inserted: ");
        scanf("%d",&val);
        temp=head;

        while (temp->data!=val){
            temp1=temp;
            temp=temp->next;
        }
        new_node->next=temp;
        temp1->next=new_node;
    } 
}

/* 
*
*
*
*
PLEASE CHECK QUESTION AND REMOVE THE ONES NOT REQUIRED
*
*
*
*
*
*
*/
void delete()
{
    int choice;
    int i;

    do{
    printf("Choose a postion to delete: \n1.First node\n2.Last node\n3.Specific node\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
        {
         case 1:
            first();
            break;
        case 2:
            last();
            break;
        case 3:
             spe();
            break;
        default:
            printf("Invalid choice\n");
        }
        printf("To continue press 1 else press 2: ");
        scanf("%d",&i);
    } while (i!=2);
    
}

void first(){
    if(head==0){
        printf("No node present\n");
    }
    else{
        temp=head;
        head=temp->next;
        free(temp);
    }
}

void last(){
    temp1=temp=head; 
    if(head==0){
        printf("no node present\n");
    }
    else
    {
    while(temp->next!=0){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=0;
    free(temp);
    }
}

void spe(){
    if(head==0){
         printf("No node present\n");
    }
    else{
        temp=head;
        int val;
         printf("Enter vale of a node to be deleted: ");
         scanf("%d",&val);
         printf("\n");
        while(temp->data!=val){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        free(temp);
    }
}

int main(){
    int choice;
    while(1)
    {
        printf("Operation to be performed on Linklist: \n1.Creation\n2.Insert\n3.Delete\n4.Display\n5.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
         case 1:
            creation();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete();
            break;
       case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}