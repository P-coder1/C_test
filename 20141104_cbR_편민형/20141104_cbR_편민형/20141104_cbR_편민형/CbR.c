#include<stdio.h>
void swap(int *x, int *y);
void main()
//call by Refernce�� swap(����)�̶�� �Լ� �����
{
	int su1, su2;
	printf("�� ���� �Է� : ");
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