/*
Theory:   
    An expression is defined as a number of operands or data items combined using several 
    operators. There are basically three types of notations for an expression, 
    
    1. Infix notation 
    2. Prefix notation 
    3. Postfix notation 
    
    The infix notation is what we come across in our general mathematics, where the operator 
    is written in-between the operands. Example: A+B (note that the operator „+‟is written in
    between the operands A and B). 
    
    The prefix notation is one in which the operator is written before the operands, it is also 
    called polish notation. The same expression when written in prefix notation looks like: 
    +AB(as operator “+”is written before operands A and B). 
    
    In the postfix notation the operators are written after the operands ,so it is called postfix 
    notation. It is also known as reverse polish or suffix notation. The above expression if 
    written in postfix expression looks like: AB+ (as operator is written after the operands A 
    and B) 
    
    The rules to be remembered during infix to postfix conversion are: 
    
        1. Parenthesize the expression starting from left to right. 
        2. During parenthesizing the expression, the operands associated with operator 
        having higher precedence are first parenthesized. 
        3. The sub-expression (part of expression) which has been converted into postfix is to be treated as single operand. 
        4. Once the expression is converted to postfix form, remove the parenthesis. 
    
    Example : A + (B*C)  Parenthesized expression (infix form) A 
    + (BC*)   Convert the multiplication 
    A (BC*) + Convert the addition 
    ABC*+ Postfix form 
    
6. Algorithm 
    a) Algorithm for Infix to Postfix Conversion 
    
    Suppose Q is an arithmetic expression written in infix notation. This algorithm finds the 
    equivalent postfix expression P.
        1. Scan Q from left to right and repeat steps 2 to 4 for each element of Q until the STACK is empty. 
        2. If an operand is encountered, add it to P 
        3. If right parenthesis is encountered, then: 
            a. Repeatedly pop from STACK and add to P each operator (on the top of STACK) until a left parenthesis is encountered. 
            b. Remove the left parenthesis (do not add the left parenthesis toP). 
    
        4. If an operator is encountered, then check the precedence of incoming operator with the element present at top of stack. 
            a. If precedence of incoming operator is higher, then push it onto STACK. 
            b. if precedence of incoming operator is less, then 
                b.1 Repeatedly pop from STACK and add to P each operator (on the top of STACK) 
                b.2 Push the incoming operator onto STACK. 
        5. Pop the remaining elements from STACK and add it to P. 
        6. Exit.
*/

#include <stdio.h>

#define MAX 100
int stk[MAX];
int top = -1;

void push(int item){

    if(top > MAX-1){
        printf("overflow\n");
        return;
    }
    top++;
    stk[top] = item;
}



int pop(){
    if (top == -1){
        printf("underflow\n");
        return -1;
    }
    int item = stk[top];
    top--;
    return item;
}



int is_operator(char sym){
    if (sym == '+' || sym == '-' || sym == '*' ||  sym == '/'){
        return 1;
    }
    return 0;
}

int eval(char* expr){

    int i = 0;
    char sym = expr[i];
    int opr1, opr2, res;

    while (sym != '\0'){
        if (sym >= '0' && sym <= '9'){
            int n = sym - '0';
            push(n);
        }
        else if (is_operator(sym)){
            opr2 = pop();
            opr1 = pop();

            switch(sym) {  
                case '+': 
                    res = opr1 + opr2; 
                    break;  
                case '-': res = opr1 - opr2; 
                           break;  
                case '*': res = opr1 * opr2; 
                             break;  
                case '/': res = opr1 / opr2; 
                            break;  

            }
        push(res);
        }
        i++;
        sym = expr[i];
    }
    res = pop();
    return res;
}

void main(){
    char exp[] = "5 6 7 + * 8 -";  
    int res = eval(exp);  
    printf("Result= %d\n", res);  

}