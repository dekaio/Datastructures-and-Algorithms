
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
int CreateWithoutUip(int arr[], int n){
    int i = 0;
    struct Node *last, *temp;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = arr[i++];
    last = first;
    while(i!= n ){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i++];
        temp->next = NULL;
        last->next = temp;
        last = temp;
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
int MaxEle(struct Node *node){
    int max;
    if (node){
        max = node->data;
    }
    while(node){
        if (max<node->data) max= node->data;
        node = node->next;
    }
    return max;
}
int MaxEle2(struct Node *node){
    int max = -32768;
    while(node){
        if (max<node->data) max = node->data;
        node = node->next;
    }
    return max;
}
int RMax(struct Node *node){
    int x;
    if (node==NULL) return -32768;
    else {
        x = RMax(node->next);
        return (x>node->data)?x:node->data;
    }
}
struct Node *Search(struct Node *node, int key){
    while(node){
        if (node->data == key) return node;
        else node = node->next;
    }
    return NULL;
}
struct Node *RSearch(struct Node *node, int key){
    if (node == NULL) return NULL;
    if (key == node->data) return node;
    Search(node->next,key);
}
struct Node *SearchMoveToFront(struct Node *node, int key){
    struct Node *q = NULL;
    while(node){
        if (node->data == key){
            q->next = node->next;
            node->next = first;
            first = node;
            return node;
        }
        q = node;
        node = node->next;
    }
    return NULL;
}
struct Node *RSearchMoveToFront(struct Node *node, int key){
    static struct Node *q = NULL;
    if (node == NULL) return NULL;
    if (node->data == key){
        q->next = node->next;
        node->next = first;
        first = node;
        return first;
    }
    q = node;
    RSearchMoveToFront(node->next, key);
}
struct Node *Insert(struct Node *node, int index, int value){
    struct Node *newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = value;
    if (index == 1){
        newn->next = node;
        node = newn;
        return node;
    }
    else {
        struct Node *fir = node;
        for (int i=1;i<index-1 && node;i++){
            node = node->next;
        }
        newn->next = node->next;
        node->next = newn;
        return fir;
    }
}
void CreateNodeInsertFirst(int ele){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = ele;
    node->next = NULL;
    if (first = NULL) first = node;
    else{
        node->next = first;
        first = node;
    }
}
void CreateNodeInsertLast(int ele){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = ele;
    node->next = NULL;
    if (first==NULL) first=last=node;
    else{
        last->next = node;
        last = node;
    }
}
void InsertInSorted(struct Node *node, int ele){
    struct Node *q;
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->next = NULL;
    new->data = ele;
    while(node && ele>node->data){
        q = node;
        node = node->next;
    }
    if (node == first){
        new->next = first;
        first = new;
    }
    else{
        q->next = new;
        new->next = node;  
    }
}
int DeleteNode(int pos){
    struct Node *p,*q;
    int x;
    p = q = first;
    if (pos<1 || pos>Count(first)){
        return -1;
    }
    if (pos ==1){
        x = first->data;
        first = first->next;
        free(p);
        return x;
    }
    else {
        for (int i=1;i<pos&&p;i++){
            q = p;
            p = p->next;
        }
        if (p){
            x = p->data;
            q->next = p->next;
            free(p);    
            return x;
        }
        return -1;
    }
}
int IsSorted(struct Node *p){
    //Check if the array is sorted or not
    struct Node *q = p;
    while(p){
        if (p->data >= q->data){
            q = p;
            p = p->next;
        }
        else{
            return -1;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {5,4,3,2,9};
    CreateWithoutUip(arr,5);
    printf("\nDisplaying elements");
    Display(first);
    printf("Total number of elements are%d",Count(first));
    printf("\nThe list after insertion is:");
    Display(Insert(first, 3,7));
    return 0;
}

