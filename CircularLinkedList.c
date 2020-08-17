

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*Head = NULL;

void CreateNode(int A[], int n){
    struct Node *p;int i = 0;
    Head = (struct Node *)malloc(sizeof(struct Node));
    p = Head;
    p->data = A[i++];
    p->next = Head;
    int k,j;
    while(i<n){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i++];
        temp->next = p->next;
        p->next = temp;
        p = temp;
        j = p->data;
        k = i;
    }
}
void Display(){
    struct Node *p;
    p = Head;
    do{
        printf("%d\n",p->data);
        p = p->next;
    }while(p!=Head);
}
void RDisplay(struct Node *h){
    static int flag = 0;
    if (h!=Head || flag==0){
        flag = 1;
        printf("%d",h->data);
        RDisplay(h->next);
    }
    flag = 0;
}
int Count(struct Node *h){
   int count=0;
   do{
       h = h->next;
       count++;
   }while(h!=Head);
   return count;
}
int Insert(struct Node *h, int index, int ele){
    struct Node *p,*q;
    p = q = h;
    int i=1;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = ele;
    temp->next = NULL;
    if (index == 1)
    {
        if (!Head){
            Head = temp;
            Head->next = Head;
        }
        else{
             p = p->next;
            while(p!=Head){
                q = p;
                p = p->next;
            }
        temp->next = Head;
        Head = temp;
        q->next = Head;  
        }
    }
    else{
        while(i<index-1){
            p = p->next;
            i++;
        }
        temp->next = p->next;
        p->next = temp;
    }
}
int Delete(struct Node *h, int index){
    struct Node *p, *q, *r;
    p = q = r = h;
    int i = 0;
    if (index == 1 && h){
        while(p->next!=Head){
            p = p->next;
        }
        p->next = h->next;
        int d = h->data;
        free (h);
        Head = p->next;
        return d;
    }
    else {
        while(i<index && p->next){
            r = q;
            q = p;
            p = p->next;
            i++;
        }
            r->next = p;
            int d = q->data;
            free(q);
            return d;
    }
}
int main()
{
    int A[5] = {1,2,3,4,5};
    CreateNode(A,5);
    printf("Displaying elements:\n");
    Display();
    return 0;
}
