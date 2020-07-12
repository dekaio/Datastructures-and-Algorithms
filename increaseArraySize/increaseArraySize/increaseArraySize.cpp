#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p, * q, i;
	p = (int*)malloc(5 * sizeof(int));
	p[0] = 1; p[1] = 2; p[3] = 3; p[4] = 4; p[2] = 5;
//	for (i = 0; i < 5; i++) {
	//	printf("%d",p[i]);
	//}
	q = (int*)malloc(10 * sizeof(int));
	for (i = 0; i < 5; i++) {
		q[i] = p[i];
		printf("%d", q[i]);
	}
	free(p);
	p = q;
	q = NULL;
	
}