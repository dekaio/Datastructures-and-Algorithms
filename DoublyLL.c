/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}*First = NULL;
void Create(int A[], int n){
    struct Node *p,*q;
    int i = 0;
    First = (struct Node *)malloc(sizeof(struct Node));
    p = q = First;
    First->data = A[i++];
    First->next = NULL;
    First->prev = NULL;
    while(i<n){
        struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
        p->next = temp;
        temp->data = A[i++];
        temp->prev = p;
        temp->next = NULL;
        p = p->next;
    }
}
void Display(struct Node *temp){
    struct Node *p,*q;
    while(temp){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    int A[5] = {1,2,3,4,5};
    Create(A,5);
    Display(First);
    return 0;
}
