
#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <math.h>

#define MAXLINE 1000
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */

int getop(char []);
void push(double);
double pop(void);
void printtop(void);
void duplicate(void);
void swap(void);
void clear(void);

int main(void){
    push(9.545);
    push(23.761);
    duplicate();
    printtop();
    swap();
    clear();

    return 0;
}

#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */


void push(double f){
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

double pop(void){
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}


void printtop(void){
    if (sp > 0)
        printf("%g\n", val[sp - 1]);
    else
        printf("error: stack empty\n");
}


void duplicate(void){
    double top = pop();
    push(top);
    push(top);
}


void swap(void){
    double top1 = pop();
    double top2 = pop();
    push(top1);
    push(top2);
}


void clear(void){
    sp = 0;
}