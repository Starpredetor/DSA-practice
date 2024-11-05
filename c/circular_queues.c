/*
 Theory:   
    A circular queue is one in which the insertion of an element is done at the very first 
    location of the queue if last location of the queue is full. In other words if we have queue Q 
    of say n elements, then after inserting an element last (i.e., in then-1th) location of the array 
    then ext element will be inserted at the very first location(i.e., location with subscript 0) of 
    the array. It is possible to insert new elements , if and only if those locations(slots)are 
    empty. We can say that a circular queue is one in which the first element comes just after 
    the last element. It can be viewed as a mesh or loop of wire, in which the two ends of the 
    wire are connected together. A circular queue over comes the problem of unutilized space 
    in linear queues implemented as arrays. A circular queue also have a front and rear to keep 
    the track of the elements to be deleted and inserted and therefore to maintain the unique 
    characteristics of the queue. 
 
6. Algorithm 
 Algorithm for Inserting an item in a circular queue. 
 
    CQINSERT (maxsize,item) 
    Let cqueue[maxsize] is an array for implementing aqueue. 
    i. Initialize front = -1 and rear = -1 
    ii. Check, if rear = maxsize -1 then set rear = 0 
        else set rear = rear +1 
    iii. Check, if rear = front then print : “Circular queueoverflow” 
        Also check, if rear = 0 then set rear = maxsize –1 else set rear = rear -1 andreturn. 
    iv. Set cqueue[rear] =item 
    v. Check, if front = -1 then set front =0 
    vi. Return s
    
    Algorithm for Deleting an item from a circular queue. 
    
    CQDELETE(maxsize) 
    i. Check, if front = -1 then print : “Circular queue underflow” andreturn 
    ii. Set item =cqueue[front] 
    iii. Check, if front = rear then set front = -1 and rear =-1 
        else check, if front = maxsize – 1 then set front =0  
        else set front = front +1 
    iv. Return the deleted element from circular queue.
*/

#include <stdio.h>


#define MAX 5

int front = -1, rear = -1;
int queue[MAX];



void enqueue(int num);
void dequeue();


void dequeue(){

    if (front == -1){
        printf("Underflow\n");
        return;
    }

    int item = queue[front];

    if (front==rear){
        front = -1;
        rear = -1;
    } else if (front == MAX -1){
        front = 0;
    } else {
        front += 1;
    }
    printf("%d removed",item);


}

void enqueue(int num){

    if ((front == 0 && rear == MAX - 1)||(front == rear + 1)){
        printf("Overflow\n");
        return;
    }
    if (front == -1 && rear == -1){
        front = 0;
        rear = 0;
    } else if (rear == MAX - 1){
        rear = 0;
    } else {
        rear += 1;
    }
    queue[rear] = num;
}

void display(){
    for(int i=0; i <= rear; i++){
        printf("%d\n",queue[i]);
    }
}
void main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();

}