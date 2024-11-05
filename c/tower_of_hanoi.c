/*
5. Theory:   
The Tower of Hanoi puzzle was invented by the French mathematician Edouard Lucas in 
1883. It consists of three poles and a number of disks of different sizes which can slide onto 
any poles. The puzzle starts with the disk in a neat stack in ascending order of size in one 
pole, the smallest at the top thus making a conical shape. The objective of the puzzle is to 
move all the disks from one pole (say ‘source pole’) to another pole (say ‘destination pole’) 
with the help of the third pole (say auxiliary pole) as depicted in figure below. 
The puzzle has the following two rules: 
      1. You can’t place a larger disk onto a smaller disk  
      2. Only one disk can be moved at a time
      
      Algorithm 
 
        Step 1: Calculate the total number of moves required i.e. "pow(2,n) - 1" here n is number of disks. 
        Step 2: If number of disks (i.e. n) is even then interchange destination pole and auxiliary pole. 
        Step 3: Iterate from i=1 to total number of moves: 
            if i%3 == 1:  
                Movement of top disk between A pole and C pole 
            if i%3 == 2: 
                Movement top disk between A pole and B pole     
            if i%3 == 0: 
                Movement top disk between B pole and C pole
*/

#include <stdio.h>

void move(int n, char source, char dest, char temp)
{
    if (n == 1)
    {
        printf("Move from %c to %c\n", source, dest);
    }
    else
    {
        move( n-1, source, temp, dest);
        move( 1, source, dest, temp);
        move( n-1, temp, dest, source);
    }
}

void main()
{
    int n; // n can be changed 
    printf("Enter the number of rings: ");
    scanf("%d", &n);
    move( n, 'A', 'B', 'C');
}