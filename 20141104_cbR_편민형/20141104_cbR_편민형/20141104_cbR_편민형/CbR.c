#include<stdio.h>
void swap(int *x, int *y);
void main()
//call by Refernce로 swap(스왑)이라는 함수 만들기
{
	int su1, su2;
	printf("두 정수 입력 : ");
	scanf("%d%d",su1,su2);
	swap(&su1,&su2);
	printf("%d\t%d\n",su1,su2);
}

void swap(int *x,int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}