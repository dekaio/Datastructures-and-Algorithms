/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Matrix{
    int *A;
    int size;
};
void Generate(struct Matrix *mat, int n, int type){
    if (type==1) mat->size = n;
    else if (type==2 || type==3 || type==6) mat->size = n*(n+1)/2;
    else if (type==4) mat->size=3*n-2;
    else if (type==5) mat->size = 2*n-1;
}
void Create(struct Matrix *mat, int type){
    int n = mat->size;
    printf("\nEnter the elements here");
    int index;
    for (int i=0;i<mat->size;i++){
        for (int j=0;j<mat->size;j++){
            if (type==1){
                if (i==j){
                    scanf("%d",&mat->A[i]);
                }
            }
            else if (type==2 || type==6){
                if (i>=j){
                    index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
                    scanf("%d",&mat->A[index]);
                }
            }
            else if (type==3){
                if (j>=i){
                  index = i*(i-1)/2 +j-1;
                  scanf("%d",&mat->A[index]);
                }
            }
            else if (type==4){
                if (i==j){
                    index = i-1;
                    scanf("%d",&mat->A[index]);
                }
                else if (i-j ==1){
                    index = n + i-1;
                    scanf("%d",&mat->A[index]);
                }
                else if (i-j== -1){
                    index = 2*n-2+j;
                    scanf("%d",&mat->A[index]);
                }
            }
            else if (type==5){
                if (i<=j){
                    scanf("%d",&mat->A[i-1]);
                }
                else if (j>i){
                    scanf("%d",&mat->A[n-1+j-1]);
                }
            }
        }
    }
}
void Get(struct Matrix mat, int type, int i, int j){
    int index;
    int n = mat.size;
    if (type==1){
        if (i==j){
            printf("%d",mat.A[i]);
        }
        else{
            printf("%d",0);
        }
    }
    else if (type==2 || type==6){
        if (i>=j){
            index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
            printf("%d",mat.A[index]);
        }
        else{
            printf("%d",0);
        }
    }
     else if ( type==6){
        if (i>=j){
            index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
            printf("%d",mat.A[index]);
        }
        else{
            int temp = i;
            i = j;
            j = temp;
            index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
            printf("%d",mat.A[index]);
        }
    }
    else if (type==3){
        if (j>=i){
          index = i*(i-1)/2 +j-1;
          printf("%d",mat.A[index]);
        }
        else printf("%d",0);
    }
    else if (type==4){
        if (i==j){
            index = i-1;
            printf("%d",mat.A[index]);
        }
        else if (i-j ==1){
            index = n + i-1;
            printf("%d",mat.A[index]);
        }
        else if (i-j== -1){
            index = 2*n-2+j;
            printf("%d",mat.A[index]);
        }
        else printf("%d",0);
    }
    else if (type==5){
        if (i<=j){
            printf("%d",mat.A[i-1]);
        }
        else if (j>i){
            printf("%d",mat.A[n-1+j-1]);
        }
    }
}
void Display(struct Matrix mat, int type){
    int n = mat.size;
    for (int i=0;i<mat.size;i++){
        for (int j=0;j<mat.size;j++){
            int index;
            if (type==1){
                if (i==j){
                    printf("%d",mat.A[i]);
                }
                else{
                    printf("%d",0);
                }
            }
            else if (type==2 ){
                if (i>=j){
                    index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
                    printf("%d",mat.A[index]);
                }
                else{
                    printf("%d",0);
                }
            }
             else if ( type==6){
                if (i>=j){
                    index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
                    printf("%d",mat.A[index]);
                }
                else{
                    int temp = i;
                    i = j;
                    j = temp;
                    index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
                    printf("%d",mat.A[index]);
                }
            }
            else if (type==3){
                if (j>=i){
                  index = i*(i-1)/2 +j-1;
                  printf("%d",mat.A[index]);
                }
                else printf("%d",0);
            }
            else if (type==4){
                if (i==j){
                    index = i-1;
                    printf("%d",mat.A[index]);
                }
                else if (i-j ==1){
                    index = n + i-1;
                    printf("%d",mat.A[index]);
                }
                else if (i-j== -1){
                    index = 2*n-2+j;
                    printf("%d",mat.A[index]);
                }
                else printf("%d",0);
            }
            else if (type==5){
                if (i<=j){
                    printf("%d",mat.A[i-1]);
                }
                else if (j>i){
                    printf("%d",mat.A[n-1+j-1]);
                }
            }
        }
    }
}
void Set(struct Matrix *mat, int type,int i, int j,int val){
    int index;int n = mat->size;
    if (type==1){
        if (i==j){
            mat->A[i] = val;
        }
    }
    else if (type==2 || type==6){
        if (i>=j){
            index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
            mat->A[index] = val;
        }
    }
    else if (type==3){
        if (j>=i){
          index = i*(i-1)/2 +j-1;
          mat->A[index] = val;
        }
    }
    else if (type==4){
        if (i==j){
            index = i-1;
            mat->A[index] = val;
        }
        else if (i-j ==1){
            index = n + i-1;
            mat->A[index] = val;
        }
        else if (i-j== -1){
            index = 2*n-2+j;
            mat->A[index] = val;
        }
    }
    else if (type==5){
        if (i<=j){
            "%d",mat->A[i-1] = val;
        }
        else if (j>i){
            "%d",mat->A[n-1+j-1] = val;
        }
    }
        
}
int main()
{   struct Matrix mat;
    int type,ch,size,i,j, val;
    printf("Choose the type of matrix: 1. Diagonal 2. Upper triangular 3. Lower triangular 4. Tridiagonal 5. Toeplitz 6.Symmetric matrix 7.Exit");
    scanf("%d",&type);
    while(type!=6){
        printf("\nEnter the size of the matrix: ");
        scanf("%d",&size);
        Generate(&mat, size,type);
        printf("1.Create 2.Set 3. Get 4.Display 5. Exit");
        scanf("%d",&ch);
        while (ch!=6){
            switch(ch){
                case 1:
                    {
                        Create(&mat,type);
                        break;
                    }
                case 2:{
                    printf("Enter the row index");
                    scanf("%d",&i);
                    printf("\nEnter the column index");
                    scanf("%d",&j);
                    printf("\nEnter the value");
                    scanf("%d",&val);
                    Set(&mat, type,i,j,val);
                    break;
                }
                case 3:{
                    printf("Enter the row index\n");
                    scanf("%d",&i);
                    printf("Enter the column index\n");
                    scanf("%d",&j);
                    Get(mat, type, i,j);
                    break;
                }
                case 4: {
                    Display(mat, type);
                    break;
                }
            }
        }
        
    }
    
    return 0;
}
