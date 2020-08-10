
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
void DisplayR(struct Node *node){
    if (node){
        printf("%d",node->data);
        DisplayR(node->next);
    }
}
void DisplayTR(struct Node *node){
    if (node){
        DisplayR(node->next);
        printf("%d",node->data);
    }
}

int Count(struct Node *node){
    int c=0;
    while (node){
        c++;
        node = node->next;
    }
    return c;
}
int RCount(struct Node *node){
    if (!node) return 0;
    return RCount(node->next)+1;
}
int Add(struct Node *node){
    int sum = 0;
    while (node){
        sum += node->data;
        node = node->next;
    }
    return sum;
}
int RAdd(struct Node *node){
    if (!node){
        return 0;
    }
    return RAdd(node->next)+node->data;
}
int main(){
    CreateWithUip();
    printf("Displaying elements\n");
    Display(first);
    return 0;
}

