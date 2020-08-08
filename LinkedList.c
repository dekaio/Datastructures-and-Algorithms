
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first = NULL;
void Display(struct Node *node){
    while(node){
        printf("%d\n",node->data);
        node = node->next;
    }
}
void CreateWithUip(){
    int ip=1;
    struct Node *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter first element");
    scanf("%d",&first->data);
    first->next = NULL;
    last = first;
    while(ip!=0){
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&ip);
        temp->data = ip;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    
}
int main(){
    CreateWithUip();
    printf("Displaying elements\n");
    Display(first);
    return 0;
}

